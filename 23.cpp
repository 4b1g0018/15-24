#include <iostream>
using namespace std;

int main() {
    int N, a1, a2, a3;
    cin >> N >> a1 >> a2 >> a3;

    int total = a1 * 15 + a2 * 20 + a3 * 30; // 總共花費的錢
    int change = N - total; // 要找回的錢

    // 若帶的錢不夠買水果
    if (change < 0) {
        cout << "0" << endl;
        return 0;
    }

    // 計算找回的銅板數目
    int num50 = change / 50;
    change = change % 50;

    int num5 = change / 5;
    change = change % 5;

    int num1 = change;

    // 輸出結果
    cout << num1 << " " << num5 << " " << num50 << endl;

    return 0;
}
