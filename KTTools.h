// KTTools.h

#ifndef KTTOOLS_H
#define KTTOOLS_H

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;




int getInteger(string prompt)
{
    int input;
    do
    {
        cout << prompt;
        cin >> input;
        cin.ignore(999, '\n');
        if (!cin.fail())
            return input;
        cin.clear();
        cin.ignore(999, '\n');
        cout << "ERROR: Invalid integer format. Please try again..." << endl;
    } while (true);
}
/*
int getInteger(string prompt, int low, int high);
int getInteger(string prompt, bool posOrNeg);

double getDouble(string prompt);
double getDouble(string prompt, double low, double high);
double getDouble(string prompt, bool posOrNeg);

char getChar(string prompt);
char getChar(string prompt, string listChars);
char getChar(string prompt, char yes, char no);
char getChar(string prompt, bool alphaOrDigit);
*/


#endif