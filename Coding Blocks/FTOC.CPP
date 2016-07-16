#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int i=2;
    while (i<n/2) {
        if (n%i==0) {
            cout << "not a prime";
            return 0;
        }
        i=i+1;
    }
    cout << "is prime";
    return 0;

}
