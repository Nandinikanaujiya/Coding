#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> nums ={5,3,7,1,9};
    int target =7;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            cout<<"element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"element not found"<<endl;
    return 0;
    
} 