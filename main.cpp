#include <iostream>
#include "tools.cpp"

using namespace std;
using namespace kttools;

int main()
{
    system("cls");

    int input;

    cout << endl;
    cout << "\t" << string(20, char(205)) << endl;
    cout << "\t Testing: randomInt" << endl;
    cout << "\t" << string(20, char(205)) << endl;
    input = randomInt(0, 10);
    cout << endl;

    cout << "\tYour input was: " << input;

    cout << endl;
    return 0;




}