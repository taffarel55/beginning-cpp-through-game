#include<iostream>

using namespace std;

int main () {
    const int ROWS = 2; 
    const int COLUMNS = 3; 
    char board[ROWS][COLUMNS] = { {'O', 'X', 'O'}, 
                                  {' ', 'X', 'X'} };

    cout<<"Lendo por linhas"<<endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout<<board[i][j];
        }
        cout<<endl;
    }

    cout<<"Lendo por colunas"<<endl;
    for (int j = 0; j < COLUMNS;j++) {
        for (int i = 0; i < ROWS;i++) {
            cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;
}