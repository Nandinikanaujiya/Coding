#include<iostream>
using namespace std;
int main() {
    int n=4;
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1;j++){
            cout <<" ";
        }
        cout <<"*";

        if(i !=0){
            //space
            for(int j=0; j<2+i-1; j++){
                cout <<" ";
            }
            cout <<"*";
        }
        cout<<endl;
    }
    //botton
    for(int i=0;i<n-1;i++){
        //spaces
        for(int j=0;j<+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != n-1){
            //spaces
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";

            }
            cout<<"*";
        }
    }
}