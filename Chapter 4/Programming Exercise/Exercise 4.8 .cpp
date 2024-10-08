//Write a function that performs the same operation as that of Exercise 4.18 but takes an int value for m. Both the functions should have the same name. Write a main that calls both the functions. Use the concept of function overloading. 
#include <bits/stdc++.h>
using namespace std;

double power(double m, int n = 2) {  
    return pow(m, n);
}

int power(int m, int n = 2) { 
    return pow(m, n);
}

int main() {
    double m1;
    int m2, n;

    cout << "Enter the base for double : ";
    cin >> m1;
    cout << "Enter the exponent : ";
    cin >> n;
    cout << "Enter the base for int : ";
    cin >> m2;

    cout << "Result for double: " << power(m1, n) << endl;
    cout << "Result for int: " << power(m2, n) << endl;

    return 0;
}
