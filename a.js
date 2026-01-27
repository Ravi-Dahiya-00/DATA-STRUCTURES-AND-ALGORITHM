const API_KEY = "xai-BZsUrQWVH7DBOCeo3uohkE2rIoMHaJOVvLqdUXsjLKsEKqwNRLOubPk5KPraRFo24A3kfelfmsC48watPASTE_YOUR_NEW_GROK_API_KEY_HERE";

async function test() {
    try {
        const res = await fetch("https://api.x.ai/v1/chat/completions", {
            method: "POST",
            headers: {
                "Authorization": `Bearer ${API_KEY}`,
                "Content-Type": "application/json"
            },
            body: JSON.stringify({
                model: "grok-2-latest",
                messages: [
                    { role: "user", content: "Say hello in one short sentence" }
                ]
            })
        });

        const data = await res.json();

        console.log("Full response:");
        console.log(JSON.stringify(data, null, 2));

        if (!data.choices || !data.choices.length) {
            console.error("No choices returned. API error or access issue.");
            return;
        }

        console.log("\nGrok reply:");
        console.log(data.choices[0].message.content);

    } catch (err) {
        console.error("Request failed:", err);
    }
}

test();
