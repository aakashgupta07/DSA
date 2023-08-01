#include<iostream>
using namespace std;
int main()
{
    cout << "Enter your age" << endl;
    int age;
    cin >> age;
    if (age > 18)
    {
        cout << "You can vote" << endl;
    }
    else 
    {
        cout << "You cannot vote" << endl;
    }

}