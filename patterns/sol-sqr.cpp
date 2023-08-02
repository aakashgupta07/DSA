#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a size of square" << endl;
    int i;
    cin >> i;
    for (int row=0; row<i; row++)
    {
        for (int col=0; col<i; col++)
        {
            cout <<"* ";
        }
            cout << endl;
    }

} 
