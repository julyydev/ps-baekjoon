#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n / 10 == n % 10 ? "1": "0") << "\n";
    
    return 0;
}