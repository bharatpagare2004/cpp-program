#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    // Examples
    cout << "Sum of integers: " << add(5, 3) ;
    cout << "Sum of floats: " << add(5.5f, 3.2f); 
    cout << "Sum of doubles: " << add(5.5, 3.2); 

    return 0;
}