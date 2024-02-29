#include <iostream>
using namespace std;

const int SIZE = 3; // Size of the Tic-Tac-Toe board

char grid[SIZE][SIZE];

// Function to initialize the board
void initializeBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = '.';
        }
    }
}

// Function to display the current state of the board
void displayBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if ((grid[i][0] == player && grid[i][1] == player && grid[i][2] == player) ||
            (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) ||
        (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool isBoardFull() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (grid[i][j] == '.')
                return false;
        }
    }
    return true;
}

// Function to handle a player's turn
void playerTurn(char player) {
    int row, col;

    cout << "Player " << player << ", enter your move (row and column): ";
    cin >> row >> col;

    // Check if the chosen cell is valid
    while (row < 1 || row > SIZE || col < 1 || col > SIZE || grid[row - 1][col - 1] != '.') {
        cout << "Invalid move. Try again: ";
        cin >> row >> col;
    }

    // Update the board with the player's move
    grid[row - 1][col - 1] = player;
}

int main() {
    char currentPlayer = 'X';

    initializeBoard();

    while (true) {
        displayBoard();

        playerTurn(currentPlayer);

        if (checkWin(currentPlayer)) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (isBoardFull()) {
            displayBoard();
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch player for the next turn
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
