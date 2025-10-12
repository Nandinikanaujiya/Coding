#include <iostream>
using namespace std;

// Function to take input
int getNumber() {
    int num;
    cin >> num;
    return num;
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to show result
void showResult(int result) {
    cout << "Sum is: " << result << endl;
}

int main() {
    cout << "Enter first number: ";
    int x = getNumber();

    cout << "Enter second number: ";
    int y = getNumber();

    int sum = add(x, y);
    showResult(sum);

    return 0;
}

