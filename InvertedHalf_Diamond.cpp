#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter no.of rows\n";
    cin>>row;

    for(int i=1;i<=row;i++){

        for(int k=1;k<=row-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

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