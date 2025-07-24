#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = 0; i < row; i++)
    {

        for (int k = 0; k < row - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (i == 0 || (i + 1) == row)
            {
                cout << "*";
            }
            else if (j == 0 || j + 1 == 2 * i + 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}