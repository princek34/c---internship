#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';

void printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void checkWin() {
 // Rows
 for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
        cout << "Player " << player << " wins!" << endl;
        exit(0);
    }
}

// Columns
for (int i = 0; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
        cout << "Player " << player << " wins!" << endl;
        exit(0);
    }
}

// Diagonals
if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
    (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
    cout << "Player " << player << " wins!" << endl;
    exit(0);
}
}

int main() {
int move;
while (true) {
    printBoard();
    cout << "Player " << player << ", enter your move (1-9): ";
    cin >> move;

    // Validate move
    if (move < 1 || move > 9) {
        cout << "Invalid move, try again." << endl;
        continue;
    }

    // Update board
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        checkWin();
        player = (player == 'X') ? 'O' : 'X';
    } else {
        cout << "Position already occupied, try again." << endl;
    }
}

return 0;
}
