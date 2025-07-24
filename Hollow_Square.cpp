#include <iostream>
#include <iomanip>

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
            if (i == 1 || i == row)
            {
                cout << "* ";
            }
            if (i != 1 && i != row)
            {
                if (j == 1 )
                    cout << "* ";
                if(j == row)
                    cout<<setw(3)<<"*";
                
                else
                    cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}