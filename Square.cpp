Enter no.of rows
5
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
    
//CPP Implementation
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

//JAVA Implementation
import java.util.Scanner;

public class StarSquareWithSpacing {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row; j++) {
                System.out.print(String.format("%2s", "*"));
            }
            System.out.println();
        }
        scanner.close();
    }
}
