#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no.of row\n";
    cin>>row;

    for(int i=0;i<row;i++){
        for(int k=0;k<row-i;k++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}