#include <iostream>

char mat[3][3]{'1','2','3','4','5','6','7','8','9'};
char fill = 'X';
void table()
{
	std::cout << "TicTacToe" << std::endl;
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 3; ++j)
			std::cout << mat[i][j] << " ";
		std::cout << std::endl;
	}
}

void input()
{
	int pos;
	std::cout << "Enter the position: ";
	std::cin >> pos;
	if(pos == 1)
		mat[0][0] = fill;
	else if(pos == 2)
		mat[0][1] = fill;
	else if(pos == 3)
		mat[0][2] = fill;
	else if(pos == 4)
		mat[1][0] = fill;
	else if(pos == 5)
		mat[1][1] = fill;
	else if(pos == 6)
		mat[1][2] = fill;
	else if(pos == 7)
		mat[2][0] = fill;
	else if(pos == 8)
		mat[2][1] = fill;
	else if(pos == 9)
		mat[2][2] = fill;
}
char win()
{
	if(mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X')
		return 'X';
	if(mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X')
        	return 'X';
	if(mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X')
        	return 'X';
	if(mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X')
		return 'X';
	if(mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X')
		return 'X';
	if(mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X')
		return 'X';
 
	if(mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X')
        	return 'X';
    	if(mat[2][0] == 'X' && mat[1][1] == 'X' && mat[0][2] == 'X')
        	return 'X';
 	
    	if(mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O')
        	return 'O';
    	if(mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O')
        	return 'O';
    	if(mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O')
        	return 'O'; 
    	if(mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O')
        	return 'O';
    	if(mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O')
        	return 'O';
    	if(mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O')
        	return 'O';
    	if(mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O')
        	return 'O';
    	if(mat[2][0] == 'O' && mat[1][1] == 'O' && mat[0][2] == 'O')
        	return 'O';

	return '=';
}
void change()
{
	if(fill == 'X')
		fill = 'O';
	else
		fill = 'X';
}
int main()
{
	table();
	while(1)
	{
		input();
		table();
		if(win() == 'X')
		{
			std::cout << "Player X wins" << std::endl;
			break;

		}
		else if(win() == 'O')
		{
			std::cout << "Player O wins" << std::endl;
			break;
		}
		change();

	}
}
