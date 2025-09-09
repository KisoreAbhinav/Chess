#include<stdio.h>
#define N 8

// Function to display the board at the start of the game and after every move
// This function is called at the start to show the default board and update after every legal move is played
int display(char *board[N][N]) {
    char *rowLabels[8] = {"⑧","⑦","⑥","⑤","④","③","②","①"};
    printf("\t🄰\t🄱\t🄲\t🄳\t🄴\t🄵\t🄶\t🄷\n\n");
    for (int i = 0; i < N; i++) {
        printf("%s\t", rowLabels[i]);
        for (int j = 0; j < N; j++) {
            printf("%s\t", board[i][j]);
        }
        printf("%s", rowLabels[i]);
        printf("\n\n");
    }
    printf("\t🄰\t🄱\t🄲\t🄳\t🄴\t🄵\t🄶\t🄷\n\n");
    return 0;
}


// Function to display the default chess board
// Lets do this for showing the board at the very start and thats the entire need for this function
void defaultboard(char *board[N][N]){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            board[i][j]="-";
        }
    }
    board[0][0]=board[0][7]="♖";
    board[0][1]=board[0][6]="♘";
    board[0][2]=board[0][5]="♗";
    board[0][3]="♕";
    board[0][4]="♔";
    for (int j=0;j<N;j++){
        board[1][j]="♙";
    }

    board[7][0]=board[7][7]="♜";
    board[7][1]=board[7][6]="♞";
    board[7][2]=board[7][5]="♝";
    board[7][3]="♛";
    board[7][4]="♚";
    for (int j=0;j<N;j++){
        board[6][j]="♟";
    }
}

// FUNCTIONS TO CHECK FOR LEGAL MOVES

int main(){

    //define chess board
    char *chess[N][N];

    //assign default chess board and pieces postions
    defaultboard(chess);

    //display the default chess board
    display(chess);

    char move[10];
    scanf("%s",move);
    //start with white's moves, takes input and loads them on the board
    //call the display function to show the board after every move
    
}
