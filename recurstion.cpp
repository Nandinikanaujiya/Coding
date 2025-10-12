#include<iostream>
using namespace std;

long int fact (int n){
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);

}
int main() {
    int num;
    cout<<"enter an integer:";
    cin>>num;
    cout<<"factorial of"<<num<<"is" <<fact(num);
    return 0;
}