// https://www.acmicpc.net/problem/10808
// written by julyy

#include <iostream>
using namespace std;

int main() {
    int count[26] = {0,};
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        count[s[i] - 'a']++;
    
    for (int i = 0; i < 26; i++)
        cout << count[i] << ' ';
    
    return 0;
}
