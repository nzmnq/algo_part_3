#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#define MAX_LEN 256

int num_word(char *s);

int main() {
    char str[MAX_LEN];

    cout << "Введіть рядок тексту: ";
    cin.getline(str, MAX_LEN);

    int count = num_word(str);

    cout << "\nВведений рядок: \"" << str << "\"" << endl;
    cout << "Кількість слів у рядку: " << count << endl;

    return 0;
}

int num_word(char *s) {
    int count = 0;
    bool inWord = false;

    while (*s != '\0') {
        if (!isspace((unsigned char)*s)) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
        s++;
    }

    return count;
}
