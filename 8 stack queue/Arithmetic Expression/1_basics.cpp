#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // An arithmetic expression is something like:
    /*
        A + B
        A + B * C
        ( A + B ) * C


        operands (A, B, C, 5, 10 etc.)
        operators (+, -, *, /, ^)
        parentheses ( )
        */


        // ✔ Infix Expression (Normal human readable form)
        //  Operator is between operands.
        /*
            A + B
            A + B * C
            ( A + B ) * C
            */


        
        // ✔ Prefix Expression (Polish Notation)
        // Operator comes before operands.
/*
        +AB
        + A * B C
        * + A B C

        Used in old calculators and compilers.
        */




        // ✔ Postfix Expression (Reverse Polish Notation)
        // Operator comes after operands.

    /*
        AB+
        ABC*+
        AB+ C*
        
        Postfix is very easy for computers.
        */


        // Prefix and Postfix?
            // Because they do not need parentheses.


        /*
        ⭐ 4. Operator Precedence and Associativity

            This determines how infix is evaluated.

                 Priority from high to low:

                        ^ (power)
                        *, /
                        +, -

    Associativity:

            ^ is right associative
            A ^ B ^ C means A ^ (B ^ C)

            +, -, *, / are left associative
            A - B - C means (A - B) - C
                    
*/
    return 0;
}