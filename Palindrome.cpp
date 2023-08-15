#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    auto isLetter = [](char c) {
        return isalpha(c) != 0;
    };

    string cleanStr;
    for (char c : str) {
        if (isLetter(c)) {
            cleanStr.push_back(tolower(c));
        }
    }

    return equal(cleanStr.begin(), cleanStr.begin() + cleanStr.size() / 2, cleanStr.rbegin());
}

int main()
{
    cout << boolalpha;
    cout << "Aula 1!\n";
    cout << isPalindrome("Ame a ema") << endl;
    cout << isPalindrome("Olá, Mundo\n") << endl;
    cout << isPalindrome("Anotaram a data da maratona");
}