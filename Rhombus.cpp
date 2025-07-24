#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter no.of rows\n";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}