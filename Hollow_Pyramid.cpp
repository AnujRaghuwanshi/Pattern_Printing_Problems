Enter no.of rows
5
     *
    * *
   *   *
  *     *
 *********

    
//CPP Implementation
    
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no.of rows\n";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        // Print leading spaces
        for (int k = 0; k < row - i; k++)
        {
            cout << " ";
        }

        // Print stars and spaces for hollow part
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


//JAVA Implementation

import java.util.Scanner;

public class HollowPyramid {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();

        for (int i = 0; i < row; i++) {
            // Print leading spaces
            for (int k = 0; k < row - i; k++) {
                System.out.print(" ");
            }

            // Print stars and spaces for hollow part
            for (int j = 0; j < 2 * i + 1; j++) {
                if (i == 0 || i + 1 == row) {
                    System.out.print("*");
                } else if (j == 0 || j + 1 == 2 * i + 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }

        scanner.close();
    }
}
