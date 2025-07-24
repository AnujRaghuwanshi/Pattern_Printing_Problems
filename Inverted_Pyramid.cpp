Enter no.of rows
5
*********
 *******
  *****
   ***
    *


//CPP Implementation

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

//JAVA Implementation

import java.util.Scanner;

public class InvertedPyramid {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();

        for (int i = row - 1; i >= 0; i--) {
            for (int k = row - 1; k > i; k--) {
                System.out.print(" ");
            }

            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }

            System.out.println();
        }

        scanner.close();
    }
}

