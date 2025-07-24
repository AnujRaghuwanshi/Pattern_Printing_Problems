#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = row - 1; i >= 0; i--)
    {

        for (int k = row - 1; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}