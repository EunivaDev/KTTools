// Developer : Kevin Tran
// Date Started : 5 / 25 / 2021
// Last Date Edited : 5 / 25 / 2021
// Description : Tools files for C++

#include<iostream>
#include"KTTools.h"
using namespace std;


int main()
{
    
    cout << "Hello World" << endl;
    cout << "Testing Purposes" << endl;

    int input = getInteger("Enter an integer: ");

    cout << "Your integer is: " << input << endl;
    
    return 0;
}