#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a size of pyramid" << endl;
    int rowCount;
    cin >> rowCount;
    
    for (int row=0; row<rowCount; row++)
    {
        for (int col=0; col<row+1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}