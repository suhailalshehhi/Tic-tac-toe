//#include <iostream>
using namespace std;

char board[9] = {'1','2','3','4','5','6','7','8','9'};

void printBoard() {
cout << board[0] << " | " << board[1] << " | " << board[2] << "\n";
cout << "---------\n";
cout << board[3] << " | " << board[4] << " | " << board[5] << "\n";
cout << "---------\n";
cout << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

int main() {
printBoard();
return 0;
}Tic tac toe game- work in progress
//add board setup and print function
