#include<iostream>
#include<iomanip>
using namespace std;

char arr_board[3][3] = { '1','2','3','4','5','6','7','8','9' };
void mainmenu();
void play_game();
void credits();
void instructions();
void player_vs_player();
bool winning_condition();
void player_vs_machine();


int main()
{

	cout << setw(68) << "=============" << endl;
	cout << setw(67) << "TIC TAC TOE" << endl;
	cout << setw(68) << "=============" << endl;

	mainmenu();

}

void mainmenu()
{
	int num;

	cout << "1. Play Game " << endl;
	cout << "2. Credits " << endl;
	cout << "3. Instructions/Rules " << endl;
	cout << endl;

	cout << "Select Option: ";
	cin >> num;
	cout << endl;

	if (num == 1)
	{
		play_game();
		cout << "Select Game Mode: ";
		cin >> num;
		cout << endl;

		if (num == 1)
		{
			player_vs_player();
		}
		else if (num == 2)
		{
			player_vs_machine();
		}
		else
		{
			cout << "Invalid Input!!";
		}

	}
	else if (num == 2)
	{
		credits();
	}

	else if (num == 3)
	{
		instructions();
	}

	else
	{
		cout << "Invalid Input!!";
	}
	system("pause");
}


void play_game()
{
	cout << "1. Player vs Player \n2. Player vs Machine" << endl;
	cout << endl;
}

void credits()
{
	cout << "Made by: Muhammad Sheharyar Ajmal  (F219304)" << endl;
}

void instructions()
{
	cout << "1. Play occurs on a 3 by 3 grid of 9 squares." << endl;
	cout << "2. Two players take turns marking empty squares,\n the first making X's, the second O's." << endl;
	cout << "3. A Row is any three squares on the grid, Adjacent\n diagonally, vertically or horizontally." << endl;
	cout << "4. If one player places three of the same marks in a\n row, the player wins." << endl;
	cout << "5. If the spaces are all filled and there is no winner,\n the game ends in a draw" << endl;
	cout << endl;
}

void player_vs_player()
{
	int turn, row, column, c = 0, d = 1;
	char player = 'X';
	bool a = false;

	system("cls");
	cout << "\t\t" << "Player 1 = X    Player 2= O\n\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[0][0] << "  |  " << arr_board[0][1] << "  |  " << arr_board[0][2] << "\n";
	cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[1][0] << "  |  " << arr_board[1][1] << "  |  " << arr_board[1][2] << "\n";
	cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[2][0] << "  |  " << arr_board[2][1] << "  |  " << arr_board[2][2] << "\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	do
	{
		if (player == 'X')
			cout << "Player 1 Turn: ";
		else if (player == 'O')
			cout << "Player 2 Turn: ";
		cin >> turn;
		cout << endl;

		if (turn == 1)
		{
			row = 0;
			column = 0;
		}
		else if (turn == 2)
		{
			row = 0;
			column = 1;
		}
		else if (turn == 3)
		{
			row = 0;
			column = 2;
		}
		else if (turn == 4)
		{
			row = 1;
			column = 0;
		}
		else if (turn == 5)
		{
			row = 1;
			column = 1;
		}
		else if (turn == 6)
		{
			row = 1;
			column = 2;
		}
		else if (turn == 7)
		{
			row = 2;
			column = 0;
		}
		else if (turn == 8)
		{
			row = 2;
			column = 1;
		}
		else if (turn == 9)
		{
			row = 2;
			column = 2;
		}
		else
		{
			cout << "Invalid Input, Enter Again";
		}
		if (player == 'X' && arr_board[row][column] != 'X' && arr_board[row][column] != 'O')
		{
			arr_board[row][column] = 'X';
			player = 'O';
			c++;
			d++;
		}
		else if (player == 'O' && arr_board[row][column] != 'X' && arr_board[row][column] != 'O')
		{
			arr_board[row][column] = 'O';
			player = 'X';
			c++;
		}
		system("cls");
		cout << "\t\t" << "Player 1 = X    Player 2= O\n\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[0][0] << "  |  " << arr_board[0][1] << "  |  " << arr_board[0][2] << "\n";
		cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[1][0] << "  |  " << arr_board[1][1] << "  |  " << arr_board[1][2] << "\n";
		cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[2][0] << "  |  " << arr_board[2][1] << "  |  " << arr_board[2][2] << "\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";

		a = winning_condition();
		if (a == true)
		{
			c = 9;
		}
		else
		{
			a = false;
		}

	} while (c < 9);

	if (player == 'O' && a == true)
	{
		cout << "Player 1 Wins!!!" << endl;
	}
	else if (player == 'X' && a == true)
	{
		cout << "Player 2 Wins!!!" << endl;
	}
	if (c == 9 && a == false)
	{
		cout << "Draw!!" << endl;
	}
}

bool winning_condition()
{
	//for rows

	for (int i = 0; i < 3; i++)
	{
		if (arr_board[i][0] == arr_board[i][1] && arr_board[i][0] == arr_board[i][2])
		{
			return true;
		}
	}

	//for columns

	for (int i = 0; i < 3; i++)
	{

		if (arr_board[0][i] == arr_board[1][i] && arr_board[0][i] == arr_board[2][i])
		{
			return true;
		}
	}

	//for diagonals

	if (arr_board[0][0] == arr_board[1][1] && arr_board[0][0] == arr_board[2][2])
	{
		return true;
	}

	if (arr_board[0][2] == arr_board[1][1] && arr_board[0][2] == arr_board[2][0])
	{
		return true;
	}
}

void player_vs_machine()
{
	int turn, row, column, c = 0, d = 1;
	char player = 'X';
	bool a = false;

	system("cls");
	cout << "\t\t" << "Player 1 = X    Player 2= O\n\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[0][0] << "  |  " << arr_board[0][1] << "  |  " << arr_board[0][2] << "\n";
	cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[1][0] << "  |  " << arr_board[1][1] << "  |  " << arr_board[1][2] << "\n";
	cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	cout << "\t\t\t\t\t\t" << "  " << arr_board[2][0] << "  |  " << arr_board[2][1] << "  |  " << arr_board[2][2] << "\n";
	cout << "\t\t\t\t\t\t" << "     |     |     \n";
	do
	{
		if (player == 'X')
		{
			cout << "Player 1 Turn: ";
			cin >> turn;
		}
		else if (player == 'O')
		{
			cout << "Computers Turn: ";
			turn = rand() % 9 + 1;
		}
		cout << endl;

		if (turn == 1)
		{
			row = 0;
			column = 0;
		}
		else if (turn == 2)
		{
			row = 0;
			column = 1;
		}
		else if (turn == 3)
		{
			row = 0;
			column = 2;
		}
		else if (turn == 4)
		{
			row = 1;
			column = 0;
		}
		else if (turn == 5)
		{
			row = 1;
			column = 1;
		}
		else if (turn == 6)
		{
			row = 1;
			column = 2;
		}
		else if (turn == 7)
		{
			row = 2;
			column = 0;
		}
		else if (turn == 8)
		{
			row = 2;
			column = 1;
		}
		else if (turn == 9)
		{
			row = 2;
			column = 2;
		}
		else
		{
			cout << "Invalid Input, Enter Again";
		}
		if (player == 'X' && arr_board[row][column] != 'X' && arr_board[row][column] != 'O')
		{
			arr_board[row][column] = 'X';
			player = 'O';
			c++;
			d++;
		}
		else if (player == 'O' && arr_board[row][column] != 'X' && arr_board[row][column] != 'O')
		{
			arr_board[row][column] = 'O';
			player = 'X';
			c++;
		}
		system("cls");
		cout << "\t\t" << "Player 1 = X    Player 2= O\n\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[0][0] << "  |  " << arr_board[0][1] << "  |  " << arr_board[0][2] << "\n";
		cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[1][0] << "  |  " << arr_board[1][1] << "  |  " << arr_board[1][2] << "\n";
		cout << "\t\t\t\t\t\t" << "_____|_____|_____\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";
		cout << "\t\t\t\t\t\t" << "  " << arr_board[2][0] << "  |  " << arr_board[2][1] << "  |  " << arr_board[2][2] << "\n";
		cout << "\t\t\t\t\t\t" << "     |     |     \n";

		a = winning_condition();
		if (a == true)
		{
			c = 9;
		}
		else
		{
			a = false;
		}

	} while (c < 9);

	if (player == 'O' && a == true)
	{
		cout << "Player 1 Wins!!!" << endl;
	}
	else if (player == 'X' && a == true)
	{
		cout << "Computer Wins!!!" << endl;
	}
	if (c == 9 && a == false)
	{
		cout << "Draw!!" << endl;
	}
}
