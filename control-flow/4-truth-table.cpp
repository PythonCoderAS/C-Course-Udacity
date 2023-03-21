/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>

void getTruthTableValue(bool a, bool b, bool c){
    bool q = (a & b && c) || (a && ( !b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a&&(!b||!c)) << "\t\t" << q << "\n";
}

int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    
    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    getTruthTableValue(true, true, true);
    getTruthTableValue(true, true, false);
    getTruthTableValue(true, false, true);
    getTruthTableValue(true, false, false);
    getTruthTableValue(false, true, true);
    getTruthTableValue(false, true, false);
    getTruthTableValue(false, false, true);
    getTruthTableValue(false, false, false);
    return 0;
}