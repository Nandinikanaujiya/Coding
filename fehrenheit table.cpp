# include<iostream>
using namespace std;

int main() {
    float fahrenheit,celsius;
    cout<<"enter temp in fahrenheit:";
    cin >> fahrenheit;

    celsius = (fahrenheit-32) *5.0/9.0;

    cout <<"temperature in celsius:" << celsius<< "c" <<endl;
}