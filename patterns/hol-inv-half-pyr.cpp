#include<iostream>
using namespace std;
int main()
{
    for (int row=0; row<6; row++)
    {
        for (int col=0; col<6; col++)
        {
            if (row==0 || col==0 || col==6-row-1)
            {
                cout << "* ";
            }
            else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}