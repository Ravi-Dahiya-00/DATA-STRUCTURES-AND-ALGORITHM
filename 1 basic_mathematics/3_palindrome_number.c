#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int original_no = x;
    int rem;
    long long reversed = 0;  

    while (x != 0) {
        rem = x % 10;
        reversed = reversed * 10 + rem;
        x = x / 10;
    }

    if (reversed > 2147483647)
        return false;

    return (int)reversed == original_no;
}

int main()
{
    int x;
    scanf("%d",&x);
    isPalindrome(x);
}