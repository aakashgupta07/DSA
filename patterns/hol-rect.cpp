#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a row size" << endl;
    int rowCount;
    cin >> rowCount;
    cout << "Enter a column size" << endl;
    int colCount;
    cin >> colCount;
    for (int row=0; row<rowCount; row++)
    {
        if (row == 0 || row == rowCount-1)
        {
            for (int col=0; col<colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int i=0; i<colCount-2; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
