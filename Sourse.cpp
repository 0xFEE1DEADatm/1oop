#pragma once
#include <iostream>
#include <fstream>
#include"string"

using namespace std;

class Account
{
    string last_name;
    double number;
    double per_cent;
    double summa;
public:
    void set_last_name(string a) { last_name = a; }
    void set_number(double b) { number = b; }
    void set_per_cent(double c) { per_cent = c; }
    void set_summa(double d) { summa = d; }
    void withdrawals(double s) { summa -= s; }
    void accrual_of_interest(double per_cent) { summa += summa / 100 * per_cent; }
    string getL() { return last_name; }
    double getN() { return number; }
    double getP() { return per_cent; }
    double getS() { return summa; }
    double getD() { return summa * 61; }
    double getE() { return summa * 76; }
};

int in_cursive(Account d)
{
    if (d.getS() < 0) {
        cout << "Negative number";
    }

    int xx = d.getS();
    switch (xx / 100)
    {
    case 1: cout << "one hundred "; break;
    case 2: cout << "two hundred "; break;
    case 3: cout << "three hundred "; break;
    case 4: cout << "four hundred "; break;
    case 5: cout << "five hundred "; break;
    case 6: cout << "six hundred "; break;
    case 7: cout << "seven hundred "; break;
    case 8: cout << "eight hundred "; break;
    case 9: cout << "nine hundred "; break;
    }
    switch ((xx % 100) / 10)
    {
    case 2: cout << "twenty "; break;
    case 3: cout << "trirty "; break;   
    case 4: cout << "forty "; break;
    case 5: cout << "fifty "; break;
    case 6: cout << "sixty "; break;
    case 7: cout << "seventy "; break;
    case 8: cout << "eighty "; break;
    case 9: cout << "ninety "; break;
    }

    if ((xx % 100 >= 10) & (xx % 100 < 20)) {
        switch (xx % 100) {
        case 10: cout << "ten"; break;
        case 11: cout << "eleven"; break;
        case 12: cout << "twelve"; break;
        case 13: cout << "thirteen"; break;
        case 14: cout << "fourteen"; break;
        case 15: cout << "fifteen"; break;
        case 16: cout << "sixteen"; break;
        case 17: cout << "seventeen"; break;
        case 18: cout << "eighteen"; break;
        case 19: cout << "nineteen"; break;
        }
    }
    else {
        switch (xx % 10)
        {
        case 0: cout << "zero\n"; break;
        case 1: cout << "one\n"; break;
        case 2: cout << "two\n"; break;
        case 3: cout << "three\n"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
        }
    }
    _getch();
    return 0;
}


#include <iostream>
#include <conio.h>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "");
    Account a, b, c, d;
    string a1, a2;
    double b1, b2, c1, d1, d2, s, p;

    cout << "Enter an account number:\n";
    cin >> b1;
    b.set_number(b1);
    cout << "Enter a new account number:\n";
    cin >> b2;
    b.set_number(b2);

    cout << "Enter the name of the account holder:\n";
    cin >> a1;
    a.set_last_name(a1);
    cout << "Enter the new name of the account holder:\n";
    cin >> a2;
    a.set_last_name(a2);

    cout << "Amount of money in the account:\n";
    cin >> d1;
    d.set_summa(d1);
    cout << "How much to withdraw?\n";
    cin >> s;
    d.withdrawals(s);

    cout << "What percentage will be charged?\n";
    cin >> p;
    c.set_per_cent(p);
    d.accrual_of_interest(p);

    cout << " - Results of the program - \n";
    cout << "Last name: " << a.getL() << endl;
    cout << "An account number: " << b.getN() << endl;
    cout << "Percent: " << c.getP() << endl;
    cout << "Sum: " << d.getS() << endl;
    cout << " - The dollar exchange rate is 61 rubles. \n - The euro rate is 76 rubles. \nAmount at the dollar rate:\n";
    cout << d.getD() << endl;
    cout << "Amount at the euro rate:\n";
    cout << d.getE() << endl;
    cout << "Sum in cursive: \n";

    in_cursive(d);

}

