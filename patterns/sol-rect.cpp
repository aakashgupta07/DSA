#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a no. of rows" << endl;
    int i;
    cin >> i;
    cout << "Enter a no. of columns" << endl;
    int j;
    cin >> j;
    for (int row=0; row<i; row++)
    {
        for (int col=0; col<j; col++)
        {
            cout <<"* ";
        }
            cout << endl;
    }

} 
