#include <iostream>
using namespace std;

void drawBoard(char squares[9]);
void selectSquare(char squares[9]);
void checkIfWinner();
bool p1Turn = true;

int main(){
    bool gameOver = false;

    char squares[9] = {'1','2','3','4','5','6','7','8','9'};
    
    while(!gameOver) {
        drawBoard(squares);
        selectSquare(squares);
        if(p1Turn) {
            p1Turn = false;
        } else {
            p1Turn = true;
        }
    }
    

}

void drawBoard(char squares[9]) {
    cout << " " << squares[0] << "  | " <<  squares[1] << " | " << " " << squares[2] << endl;
    cout << "___" << " |___| " << "___" << endl;
    cout << " " << squares[3] << "  | " <<  squares[4] << " | " << " " << squares[5] << endl;
    cout << "___" << " |___| " << "___" << endl;
    cout << " " << squares[6] << "  | " <<  squares[7] << " | " << " " << squares[8] << endl;
}

void selectSquare(char squares[9]) {
    
    if(p1Turn) 
        cout << "Player 1, please select an available square to mark with an X" << endl;
    else
        cout << "Player 2, please select an available square to mark with an O" << endl;
    
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            if(squares[0]=='1') {
                if(p1Turn) {
                    squares[0] = 'X';
                } else {
                    squares[0] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 2:
            if(squares[1]=='2') {
                if(p1Turn) {
                    squares[1] = 'X';
                } else {
                    squares[1] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 3:
            if(squares[2]=='3') {
                if(p1Turn) {
                    squares[2] = 'X';
                } else {
                    squares[2] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 4:
            if(squares[3]=='4') {
                if(p1Turn) {
                    squares[3] = 'X';
                } else {
                    squares[3] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 5:
            if(squares[4]=='5') {
                if(p1Turn) {
                    squares[4] = 'X';
                } else {
                    squares[4] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 6:
            if(squares[5]=='6') {
                if(p1Turn) {
                    squares[5] = 'X';
                } else {
                    squares[5] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
        case 7:
            if(squares[6]=='7') {
                if(p1Turn) {
                    squares[6] = 'X';
                } else {
                    squares[6] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 8:
            if(squares[7]=='8') {
                if(p1Turn) {
                    squares[7] = 'X';
                } else {
                    squares[7] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;
        case 9:
            if(squares[8]=='9') {
                if(p1Turn) {
                    squares[8] = 'X';
                } else {
                    squares[8] = 'O'; 
                } 
            } else {
                cout << "Not a valid choice" << endl;
            } 
            break;              
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }
}