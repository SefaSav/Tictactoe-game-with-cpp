#include <iostream>
#include <String>

using namespace std;

void printBoard(string []);
void isSomeoneWin(string []);
void checkTie(string []);
static bool game = true;
int main(int argc, char** argv) {
	int player1;
	int player2;
	int i = 1;
	string board[9]= {"-","-","-","-","-","-","-","-","-"};
	string boardNumber[9]={ "1","2","3","4","5","6","7","8","9"};
	
	while(game){
		printBoard(boardNumber);
		if(i%2 == 1){
			cout << "Player 1 turn: \n";
			cin >>player1;
			if(board[player1-1] == "-")
				board[player1-1] = "X";
			else{
				cout << "Pick somewhere else: \n";
				cin >>player1;
			}
			board[player1-1] = "X";
		    printBoard(board);
			++i;
		}else{
			cout << "Player 2 turn: \n";
			cin >>player2;
			if(board[player2-1] == "-")
				board[player2-1] = "O";
			else{
				cout << "Pick somewhere else: \n";
				cin >>player2;
			}
			board[player2-1] = "O";
			printBoard(board);
			++i;
		}
		
	isSomeoneWin(board);
	checkTie(board);
	}
	
	
	return 0;
}

void printBoard(string board[]){
	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
	cout << "----------" << endl;
}

void isSomeoneWin(string board[]){
	//for horizontal
	if(board[0] == "X" && board[1] == "X" && board[2] == "X" || board[3] == "X" && board[4] == "X" && board[5] == "X" || board[6] == "X" && board[7] == "X" && board[8] == "X" ){
		cout << "player1 \"X\" won";
		game = false;
	}
	else if(board[0] == "O" && board[1] == "O" && board[2] == "O" || board[3] == "O" && board[4] == "O" && board[5] == "O" || board[6] == "O" && board[7] == "O" && board[8] == "O" ){
		cout << "player2 \"0\" won";
		game = false;
	}
	//for vertical
	else if(board[0] == "X" && board[3] == "X" && board[6] == "X" || board[1] == "X" && board[4] == "X" && board[7] == "X" || board[2] == "X" && board[5] == "X" && board[8] == "X" ){
		cout << "player1 \"X\" won";
		game = false;
	}
	else if(board[0] == "O" && board[3] == "O" && board[6] == "O" || board[1] == "O" && board[4] == "O" && board[7] == "O" || board[2] == "O" && board[5] == "O" && board[8] == "O" ){
		cout << "player2 \"0\"won";
		game = false;
	}
	//FOR DÝAGONAL
	else if(board[0] == "X" && board[4] == "X" && board[8] == "X" || board[2] == "X" && board[4] == "X" && board[6] == "X" ){
		cout << "player1 \"X\" won";
		game = false;
	}
	else if(board[0] == "O" && board[4] == "O" && board[8] == "O" || board[2] == "O" && board[4] == "O" && board[6] == "O" ){
		cout << "player2 \"0\" won";
		game = false;
	}
}

void checkTie(string board[]){
	if(board[0] != "-" && board[1] != "-" && board[2] != "-" && board[3] != "-" && board[4] != "-" && board[5] != "-" && board[6] != "-" && board[7] != "-" && board[8] != "-" ){
		cout << "Game tie";
		game = false;
	}
}


