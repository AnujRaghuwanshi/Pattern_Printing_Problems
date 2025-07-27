*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

//C++ Implementatioon
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



package Pattern;

public class ButterflyPattern {
    public static void main(String[] args) {
        int  n = 4;
       // Upper half
       for(int i=1; i<=n; i++){
           // Left stars
           for(int j=1; j<=i; j++){
               System.out.print("*");
           }
           // Spaces
           for(int k=1; k<=2*(n-i); k++){
               System.out.print(" ");
           }
            // Right stars
           for(int j=1; j<=i; j++){
               System.out.print("*");
           }
           System.out.println();
       }
       
       // Lower half    
       for(int i=n; i>=1; i--){
           // Left stars
           for(int j=1; j<=i; j++){
               System.out.print("*");
           }
           // Spaces
           for(int k=1; k<=2*(n-i); k++){
               System.out.print(" ");
           }
           // Right stars
           for(int j=1; j<=i; j++){
               System.out.print("*");
           }
           System.out.println();
       }
    }
    
    
}
