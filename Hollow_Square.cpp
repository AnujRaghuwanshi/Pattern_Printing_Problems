Enter no.of rows
5
* * * * * 
*       *
*       *
*       *
* * * * * 

//CPP Implementation
    
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no.of rows\n";
    cin >> row;
   for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row; j++) {
                if (i == 1 || i == row) {
                    // Print full star row (first and last row)
                    cout<<"* ";
                } else {
                    // Hollow part
                    if (j == 1) {
                        cout<<"* ";
                    } else if (j == row) {
                        cout<<"*";
                    } else {
                        cout<<"  "; // Two spaces for proper alignment
                    }
                }
            }
            cout<<endl;
        }
    return 0;
}


//JAVA Implementation

import java.util.Scanner;

public class HollowSquare {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();

        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row; j++) {
                if (i == 1 || i == row) {
                    // Print full star row (first and last row)
                    System.out.print("* ");
                } else {
                    // Hollow part
                    if (j == 1) {
                        System.out.print("* ");
                    } else if (j == row) {
                        System.out.print("*");
                    } else {
                        System.out.print("  "); // Two spaces for proper alignment
                    }
                }
            }
            System.out.println();
        }

        scanner.close();
    }
}
