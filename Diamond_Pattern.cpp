#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < (row - i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < row - 1; i++)
    {
        for (int k = 0; k <= i + 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (row - i - 1) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}