enter value of n
5
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

//CPP Implementation
    
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces (2 per gap for alignment)
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        // Print stars with space
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

//JAVA Implementation

import java.util.Scanner;

public class CenteredHalfPyramid {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter value of n:");
        int n = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            // Print leading spaces (2 per gap for alignment)
            for (int k = 1; k <= 2 * (n - i); k++) {
                System.out.print(" ");
            }
            // Print stars with space
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        scanner.close();
    }
}
