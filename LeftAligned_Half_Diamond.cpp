Enter no.of rows
6
     *
    **
   ***
  ****
 *****
******
 *****
  ****
   ***
    **
     *

    
//CPP Implementation
    
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter no.of rows\n";
    cin>>row;

    // Upper half
    for(int i=1;i<=row;i++){
        for(int k=1;k<=row-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower half
    for(int i=1;i<row;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//JAVA Implementation

import java.util.Scanner;

public class MirroredHalfDiamond {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();

        // Upper half
        for (int i = 1; i <= row; i++) {
            for (int k = 1; k <= row - i; k++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // Lower half
        for (int i = 1; i < row; i++) {
            for (int k = 1; k <= i; k++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= row - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        scanner.close();
    }
}

