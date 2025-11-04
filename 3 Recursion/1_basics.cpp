#include <iostream>
using namespace std;


void printNumbers(int n) {
    // Base case
    if (n == 0) return;

    // Work
    cout << n << " ";

    // Recursive call
    printNumbers(n - 1);
}


int main(){

    // Recursion is a function calling itself directly or indirectly, until a base condition is met.
    // Base case – the condition that stops recursion (otherwise it becomes infinite).
    // Recursive case – the part where the function calls itself.


    /*
        Without a base case, recursion goes infinite → stack overflow.
        Recursion uses stack memory because each function call is stored in the call stack.
        Think of recursion as breaking a big problem into smaller subproblems.
                   
        
        A segmentation fault (often called segfault) happens when your program tries to access memory that it’s not allowed to.
        It’s a runtime error (happens while program is running, not during compilation).
        
                    How to Avoid Segmentation Fault

                            ✅ Always check array bounds.
                            ✅ Initialize pointers before use.
                            ✅ After delete, set pointer to NULL.
                            ✅ Ensure base case in recursion to prevent infinite calls.
                            ✅ Use tools like Valgrind (Linux) to detect invalid memory access.

                     
        👉 Stack space = the limited amount of memory allocated by the system for the stack of a program.
                Each time you call a function, a stack frame is created (stores parameters, local variables, return address).
                When function ends, its stack frame is removed (popped from stack).


                A stack overflow occurs when the program uses more stack space than available.



                    Stack space = the memory limit allocated for stack usage.
                    Stack overflow = when you exceed that limit (due to deep recursion or huge local variables)
                    
                    
                    
                    
                    
        A recursion tree is a diagrammatic representation of how a recursive function expands.
            Each node in the tree represents a function call.
            Edges (arrows) show which calls lead to other calls.
            The tree helps to visualize the flow of recursive calls and understand time complexity..


            
                                                        */

          printNumbers(5); 
            
          return 0;
}
