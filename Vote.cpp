#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age;
        cout << "Enter your age:\n";
        cin >> age;
        if (age >= 18)
        {
            cout << "Access granted- you are old enough to vote.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
    return 0;
}