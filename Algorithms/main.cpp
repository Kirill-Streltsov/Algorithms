//
//  main.cpp
//  Algorithms
//
//  Created by Kirill Streltsov on 17.08.23.
//

#include <iostream>

using namespace std;

// MARK: Tree recursion

void func(int x) {
    if (x > 0) {
        cout << x << " ";
        func(x - 1);
        func(x - 1);
    }
}


// MARK: Indirect recursion

void funcB(int n);

void funcA(int n) {
    if (n > 0) {
        cout << n << " ";
        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 1) {
        cout << n << " ";
        funcA(n / 2);
    }
}

// MARK: Nested recursion

int funcNested(int n) {
    if (n > 100) {
        return n - 10;
    }
    return funcNested(funcNested(n + 11));
}

// MARK: Sum of first N natural numbers

int sumOfFirstN(int n) {
    if (n == 1) {
        return 1;
    } else {
        return sumOfFirstN(n - 1) + n;
    }
    return 0;
}

// MARK: Factorial

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// MARK: Power

int power(int n, int pow) {
    if (pow == 0) {
        return 1;
    } else {
        return n * power(n, pow - 1);
    }
}

// MARK: Taylor Series e^x

double taylorSeries(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        
        return (double)power(x, n)/(double)factorial(n) + taylorSeries(x, n - 1);
    }
}

// MARK: Nth Fibonacci

int fibonacci(int n) {
    if (n <= 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << sumOfFirstN(5) << endl;
    cout << factorial(5) << endl;
    cout << power(20, 20) << endl;
    cout << taylorSeries(4, 30) << endl;
    cout << fibonacci(5) << endl;
    return 0;
}

