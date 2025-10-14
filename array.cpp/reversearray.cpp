#include<iostream>
using namespace std ;
void reversearray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
} 
int main(){
    int arr[6]={1,2,3,4,5,6};
            
    reversearray(arr,6);
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    
    }
    return 0;
}
