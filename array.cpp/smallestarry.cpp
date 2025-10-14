#include<iostream>
using namespace std;
int main(){
    int nums[]= {5,15,22,1,-16,34};
    int size =6;

    #include<climits>
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0;i<size;i++){//min,max
        smallest = min(smallest,nums[i]);
        largest = max(largest,nums[i]);
    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
    return 0;

}
