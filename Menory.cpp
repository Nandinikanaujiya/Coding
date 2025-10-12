#include<iostream>
using namespace std;

int* createArray(int n) {
    int*arr = new int[n];
    for(int i =0;i<n; ++i) cin>>arr[i];
    return arr;
}
int main () {
    int n;
    cin>>n;
    int*aree = createArray(n);
    for (int i =0; i<n; ++i) cout << arr [i] <<" ";
    delete[] arr;
    return 0;

}