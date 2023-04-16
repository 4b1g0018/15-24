#include <iostream>
#include <string>
#include <algorithm> // reverse()

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;

        // �N��J����ӼƦr����A��K�q�Ӧ�ƶ}�l�ۥ[
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        // �O�� a �O��������Ʀr
        if (a.size() < b.size()) {
            swap(a, b);
        }

        string sum;
        int carry = 0;

        // �i��ۥ[�B��A�`�N�n�B�z�i��
        for (int j = 0; j < a.size(); j++) {
            int x = a[j] - '0';
            int y = (j < b.size()) ? (b[j] - '0') : 0;
            int s = x + y + carry;
            carry = s / 10;
            sum += (s % 10) + '0';
        }

        // �B�z�̰��쪺�i��
        if (carry > 0) {
            sum += carry + '0';
        }

        // �N�ۥ[�����G����^��
        reverse(sum.begin(), sum.end());

        cout << sum << endl;
    }

    return 0;
}

