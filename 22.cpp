#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool win = false;

    // ��J�x�}
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // �ˬd��V�M���V
    for (int i = 0; i < 3; i++) {
        if (matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2] && matrix[i][0] != 2) {
            win = true;
            break;
        }
        if (matrix[0][i] == matrix[1][i] && matrix[1][i] == matrix[2][i] && matrix[0][i] != 2) {
            win = true;
            break;
        }
    }

    // �ˬd�צV
    if (!win) {
        if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[0][0] != 2) {
            win = true;
        }
        if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0] && matrix[0][2] != 2) {
            win = true;
        }
    }

    // ��X���G
    if (win) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

