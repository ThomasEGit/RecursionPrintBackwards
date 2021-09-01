// RecursionPrintBackwards.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The way substr works it is that it will remove the first letter (left most) letter in the string.
// In PrintBackwards() it takes the first input string then removes the first letter and that string
// is put into PrintBackwards() again until it reaches the base case.
// Once at base case it will just cout the letters backwards.

#include <iostream>
using namespace std;

void PrintBackwards(string input)
{
    if (input.size() == 0)
    {
        return;
    }
    else
    {
        PrintBackwards(input.substr(1));
        cout << input[0];
    }
}

int main()
{
    PrintBackwards("Recursion");
    return 0;
}