#include <iostream>
#include<iomanip>
using namespace std;
int main()
{

    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout <<setw(2)<< "*";
        }
        cout << endl;
    }
    return 0;
}