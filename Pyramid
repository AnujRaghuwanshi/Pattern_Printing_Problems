Enter no.of row
5
     *
    ***
   *****
  *******
 *********

//CPP Implementation    
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no.of row\n";
    cin>>row;

    for(int i=0;i<row;i++){
        // Print leading spaces
        for(int k=0;k<row-i;k++){
            cout<<" ";
        }
        // Print stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//JAVA Implementation
import java.util.Scanner;

public class CenteredStarPyramid {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int row = scanner.nextInt();

        for (int i = 0; i < row; i++) {
            // Print leading spaces
            for (int k = 0; k < row - i; k++) {
                System.out.print(" ");
            }
            // Print stars
            for (int j = 0; j < 2 * i + 1; j++) {
                System.out.print("*");
            }

            System.out.println();
        }

        scanner.close();
    }
}
