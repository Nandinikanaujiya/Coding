#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){//FOUND
            
            return i;
        }
    }
    
    return -1;//NOT FOUND 
}

int main(){
    int arr[] = {4,5,2,7,1,5,9};
    int sz =2;
    int target =8;

    linearSearch(arr,sz,target);
    return 0;

}