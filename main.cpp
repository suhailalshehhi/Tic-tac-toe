#include <iostream>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void printBoard() {
cout << board[0] << " | " << board[1] << " | " << board[2] << "\n";
cout << "---------\n";
cout << board[3] << " | " << board[4] << " | " << board[5] << "\n";
cout << "---------\n";
cout << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

bool checkWin(char p) {
int w[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
for (int i = 0; i < 8; i++)
if (board[w[i][0]] == p && board[w[i][1]] == p && board[w[i][2]] == p)
return true;
return false;
}

int main() {
char player = 'X';
for (int turn = 0; turn < 9; turn++) {
printBoard();
int move;
cout << "Player " << player << ", pick 1-9: ";
cin >> move;
if (cin.fail() || move < 1 || move > 9 || board[move-1] == 'X' || board[move-1] == 'O') {
cin.clear();
cin.ignore(1000, '\n');
cout << "Invalid move, try again.\n";
turn--;
continue;
}
board[move-1] = player;
if (checkWin(player)) {
printBoard();
cout << "Player " << player << " wins!\n";
return 0;
}
player = (player == 'X') ? 'O' : 'X';
}
printBoard();
cout << "It's a draw!\n";
return 0;
}


