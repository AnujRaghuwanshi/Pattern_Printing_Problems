#include <iostream>
using namespace std;

int main()
{

    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {

        for (int k = i; k <= row; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}