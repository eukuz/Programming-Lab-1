// Task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    std::cout << "Input a number 1<X<100: ";
    int x;
    std::string res;
    std::cin >> x;
    int ones = x % 10;
    int tens = (x/10) % 10;
    if (tens!= 0)
    {
        switch (tens)
        {
        case 1:
            res += "X";
            break;
        case 2:
            res += "XX";
            break;
        case 3:
            res += "XXX";
            break;
        case 4:
            res += "XL";
            break;
        case 5:
            res += "L";
            break;
        case 6:
            res += "LX";
            break;
        case 7:
            res += "LXX";
            break;
        case 8:
            res += "LXXX";
            break;
        case 9:
            res += "XC";
            break;
        }

    }
    switch (ones)
    {
    case 1:
        res += "I";
        break;
    case 2:
        res += "II";
        break;
    case 3:
        res += "III";
        break;
    case 4:
        res += "IV";
        break;
    case 5:
        res += "V";
        break;
    case 6:
        res += "VI";
        break;
    case 7:
        res += "VII";
        break;
    case 8:
        res += "VIII";
        break;
    case 9:
        res += "IX";
        break;
    }
    
    std::cout << res;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
