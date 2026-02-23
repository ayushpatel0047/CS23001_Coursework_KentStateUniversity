#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Recursion
int fibonacci_recursion(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2);
}

// Tail recursion
int fibonacci_tail(int n, int a = 0, int b = 1) {
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else
        return fibonacci_tail(n - 1, b, a + b);
}

int main() {
    int n;

    cout << "enter a number :  ";
    cin >> n;

    cout << "\n Fibonacci Recursion: \n";
    int i = 0;
    while (i < n) {
        cout << fibonacci_recursion(i) << " ";
        i++;
    }

    cout << "\n Fibonacci Tail Recursion: \n";
    i = 0;
    while (i < n) {
        cout << fibonacci_tail(i) << " ";
        i++;
    }

    cout << endl;
    return 0;
}