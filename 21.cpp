#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string line;
    getline(cin, line); // 讀入一行文字

    unordered_map<char, int> freq; // 用來記錄各個字母出現的次數

    int wordCount = 0; // 用來記錄字數
    bool inWord = false; // 用來記錄是否在單字中

    for (char c : line) {
        if (isalpha(c)) { // 如果是字母
            if (!inWord) { // 如果不在單字中
                inWord = true;
                wordCount++;
            }
            c = tolower(c); // 將字母轉成小寫
            freq[c]++; // 計算字母出現的次數
        } else { // 如果不是字母
            inWord = false;
        }
    }

    cout << "字數: " << wordCount << endl;
    for (const auto& p : freq) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
