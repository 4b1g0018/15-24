#include <iostream>
using namespace std;

int main() {
    int N, a1, a2, a3;
    cin >> N >> a1 >> a2 >> a3;

    int total = a1 * 15 + a2 * 20 + a3 * 30; // �`�@��O����
    int change = N - total; // �n��^����

    // �Y�a���������R���G
    if (change < 0) {
        cout << "0" << endl;
        return 0;
    }

    // �p���^���ɪO�ƥ�
    int num50 = change / 50;
    change = change % 50;

    int num5 = change / 5;
    change = change % 5;

    int num1 = change;

    // ��X���G
    cout << num1 << " " << num5 << " " << num50 << endl;

    return 0;
}
