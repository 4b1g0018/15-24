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

        // 將輸入的兩個數字反轉，方便從個位數開始相加
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        // 保證 a 是比較長的數字
        if (a.size() < b.size()) {
            swap(a, b);
        }

        string sum;
        int carry = 0;

        // 進行相加運算，注意要處理進位
        for (int j = 0; j < a.size(); j++) {
            int x = a[j] - '0';
            int y = (j < b.size()) ? (b[j] - '0') : 0;
            int s = x + y + carry;
            carry = s / 10;
            sum += (s % 10) + '0';
        }

        // 處理最高位的進位
        if (carry > 0) {
            sum += carry + '0';
        }

        // 將相加的結果反轉回來
        reverse(sum.begin(), sum.end());

        cout << sum << endl;
    }

    return 0;
}

