#include <iostream>
#include <vector>

using namespace std;

// Function to draw the tic-tac-toe board
void drawBoard(const vector<char>& board) {
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "-----------" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}



    // Check diagonals
    if (board[0] == player && board[4] == player && board[8] == player)
        return true;
    if (board[2] == player && board[4] == player && board[6] == player)
        return true;

    return false;
}

// Function to play tic-tac-toe
void playGame() {
    vector<char> board(9, ' ');  // Create an empty tic-tac-toe board
    char currentPlayer = 'X';
    int moves = 0;

    while (moves < 90) {
        cout << "Current board:" << endl;
        drawBoard(board);

        int position;
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> position;

        // Convert position to 0-based index
        position--;

        if (position < 0 || position >= 9 || board[position] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        board[position] = currentPlayer;
        moves++;

        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            drawBoard(board);
            return;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    cout << "It's a tie!" << endl;
    drawBoard(board);
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    playGame();
    return 0;
}


// I have made some changers to the code 