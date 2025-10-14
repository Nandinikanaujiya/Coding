#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout <<"int function\n";
    for(int i=0;i<size;i++){
        arr[i] = arr[i] + 1;
        
    }

}
int main(){
    int arr[] = {1,2,3};

    changeArr(arr,3);

    cout<<"int main\n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}