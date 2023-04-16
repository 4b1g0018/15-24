#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string line;
    getline(cin, line); // Ū�J�@���r

    unordered_map<char, int> freq; // �ΨӰO���U�Ӧr���X�{������

    int wordCount = 0; // �ΨӰO���r��
    bool inWord = false; // �ΨӰO���O�_�b��r��

    for (char c : line) {
        if (isalpha(c)) { // �p�G�O�r��
            if (!inWord) { // �p�G���b��r��
                inWord = true;
                wordCount++;
            }
            c = tolower(c); // �N�r���ন�p�g
            freq[c]++; // �p��r���X�{������
        } else { // �p�G���O�r��
            inWord = false;
        }
    }

    cout << "�r��: " << wordCount << endl;
    for (const auto& p : freq) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
