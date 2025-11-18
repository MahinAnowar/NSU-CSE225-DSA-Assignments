#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

// Function to check if parentheses are balanced
bool isBalanced(string expression)
{
    int n = expression.length();

    CharStack s(n);

    for (int i = 0; i < n; i++)
    {
        char current = expression[i];

        if (current == '(')
        {
            s.push(current);
        }
        else if (current == ')')
        {
            if (s.isEmpty())
            {
                return false;
            }
            s.pop();
        }
    }


    return s.isEmpty();
}

int main()
{
    string input;

    while (true)
    {

        cout << "Enter a set of parentheses: ";
        cin >> input;

        if (isBalanced(input))
        {
            cout << "Output: Balanced" << endl;
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << "Output: Not Balanced" << endl;
            cout << endl;
            cout << endl;
        }
    }

    return 0;
}
