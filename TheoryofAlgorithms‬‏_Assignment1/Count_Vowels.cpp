#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(string s, int index = 0) {
    if (index == s.length()) return 0;
    return isVowel(s[index]) + countVowels(s, index + 1);
}

int main() {
    string S;
    getline(cin, S);
    cout << countVowels(S) << endl;
    return 0;
}
