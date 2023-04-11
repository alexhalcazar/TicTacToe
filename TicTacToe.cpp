#include <iostream>
using namespace std;

void drawBoard(char squares[9]);
void selectSquare(char squares[9]);
bool checkIfWinner(char squares[9]);
bool p1Turn = true;

int main(){
    bool gameOver = false;
    int turn = 0;
    char squares[9] = {'1','2','3','4','5','6','7','8','9'};
    
    while(!gameOver) {
        if(turn<=9) {
            drawBoard(squares);
            selectSquare(squares);
            gameOver = checkIfWinner(squares);
             if(p1Turn) {
                p1Turn = false;
            } else {
                p1Turn = true;
            }
            turn++;
        }
        else {
            cout << "Game ends in a Tie!" << endl;
            gameOver = true;
        }
    }
    drawBoard(squares); // final result
}

void drawBoard(char squares[9]) {
    // using symbols to draw a tic tac toe board on CLI
    cout << "--------------------------" << endl;
    cout << " " << squares[0] << "  | " <<  squares[1] << " | " << " " << squares[2] << endl;
    cout << "___" << " |___| " << "___" << endl;
    cout << " " << squares[3] << "  | " <<  squares[4] << " | " << " " << squares[5] << endl;
    cout << "___" << " |___| " << "___" << endl;
    cout << " " << squares[6] << "  | " <<  squares[7] << " | " << " " << squares[8] << endl;
    cout << "--------------------------" << endl;
}

void selectSquare(char squares[9]) {
    
    bool validChoice = false;
    char choice;
    string input;

    while(!validChoice) {
    
        if(p1Turn) 
            cout << "Player 1, please select an available square to mark with an X" << endl;
        else
            cout << "Player 2, please select an available square to mark with an O" << endl;
        
        cin >> input;
        choice = input[0];     // read the next inputted character 
        std:: cout << "Player choose: " << choice << endl;

        switch (choice) {
            case '1':
                if(squares[0]=='1') {
                    if(p1Turn) {
                        squares[0] = 'X';
                    } else {
                        squares[0] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '2':
                if(squares[1]=='2') {
                    if(p1Turn) {
                        squares[1] = 'X';
                    } else {
                        squares[1] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '3':
                if(squares[2]=='3') {
                    if(p1Turn) {
                        squares[2] = 'X';
                    } else {
                        squares[2] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '4':
                if(squares[3]=='4') {
                    if(p1Turn) {
                        squares[3] = 'X';
                    } else {
                        squares[3] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '5':
                if(squares[4]=='5') {
                    if(p1Turn) {
                        squares[4] = 'X';
                    } else {
                        squares[4] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '6':
                if(squares[5]=='6') {
                    if(p1Turn) {
                        squares[5] = 'X';
                    } else {
                        squares[5] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '7':
                if(squares[6]=='7') {
                    if(p1Turn) {
                        squares[6] = 'X';
                    } else {
                        squares[6] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '8':
                if(squares[7]=='8') {
                    if(p1Turn) {
                        squares[7] = 'X';
                    } else {
                        squares[7] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;
            case '9':
                if(squares[8]=='9') {
                    if(p1Turn) {
                        squares[8] = 'X';
                    } else {
                        squares[8] = 'O'; 
                    } 
                    validChoice = true;
                } else {
                    cout << "Not a valid choice" << endl;
                } 
                break;              
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
        }
    }
}

bool checkIfWinner(char squares[9]) {
    if((squares[0]==squares[1]&&squares[0]==squares[2])||   // win by first row
        (squares[0]==squares[3]&&squares[0]==squares[6])||  // win by first column 
        (squares[0]==squares[4]&&squares[0]==squares[8])||  // win by diagonal top left to bottom right
        (squares[1]==squares[4]&&squares[0]==squares[7])||  // win by second column
        (squares[2]==squares[5]&&squares[2]==squares[8])||  // win by third column
        (squares[3]==squares[4]&&squares[3]==squares[5])||  // win by second row
        (squares[6]==squares[7]&&squares[6]==squares[8])||  // win by third row
        (squares[2]==squares[4]&&squares[2]==squares[6]))   // win by diagonal top right to bottom left
        {
            if(p1Turn) {
                cout << "Player 1 wins by Tic Tac Toe!" << endl;
                return true;
            } else {
                cout << "Player 2 wins by Tic Tac Toe!" << endl;
                return true;
            }
        } else {
            return false;
        }
}