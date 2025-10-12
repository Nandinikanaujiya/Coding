#include<iostream>
using namespace std;

int main() {
    /*int n = 5;

    for(int i=0; i<n; i++) {//n
        for(int j=0; j<i+1; j++)  { //i=1
            cout<<"*";
        }
        cout<< endl;
    }*/
    int n = 5;
    cin>>n;
    for(int i = 0; i<n; i++) {
        char ch = 'A'+i;
    for(int j=0; j<i+1; j++) {

   // cout << (i+1);
    cout<<ch;
    }
    cout << endl;
    }
}