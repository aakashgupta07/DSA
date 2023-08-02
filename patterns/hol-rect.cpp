#include<iostream>
using namespace std;
int main()
{
    for (int row=0; row<5; row++)
    {
        if (row == 0 || row == 4)
        {
            for (int col=0; col<8; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i=0; i<6; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
