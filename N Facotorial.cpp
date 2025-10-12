#include<iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;


    //ask the user for a number
    cout<<"enter a number:";
    cin>>n;
    if(n<0) {
        cout<<"Factorial is not defined for negative number." << endl;
        } else {

    for(int i = 1; i<=n; i++) {
        fact = fact *1;
    }
    
    cout << "Factorial of" <<n<<"is " <<fact<<endl;
}
    }