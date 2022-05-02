#pragma once
#ifndef _DAN_TICTACTOE_H__
#define _DAN_TICTACTOE_H__

namespace dan {
	class TicTacToe {
		char m_board[5][5]={
											{' ','|',' ','|',' '},
											{'-','+','-','+','-',},
											{' ','|',' ','|',' '},
											{'-','+','-','+','-',},
											{' ','|',' ','|',' '}
										};
		
	public:
		TicTacToe();
		void displayBoard();
		void play();
		bool isBoardFull();
		bool isWinner();		
	}
}
#endif