#include <iostream>
#include "TicTacToe.h"
#include "Utils.h"

namespace dan {
	TicTacToe::TicTacToe(){}
	void TicTacToe::displayBoard() {
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				std::cout << m_board[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	void TicTacToe::play() {
		int pos{0};
		std::cout << "Insert the position you would to play at: ";
		pos = Utils::getInt(0,10);
		
		if (pos == 1){
			if (m_board[0][0] == ' ') {
				m_board[0][0] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 2) {
			if(m_board[0][2] == ' ') {
				m_board[0][2] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 3) {
			if(m_board[0][4] == ' ') {
				m_board[0][4] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 4) {
			if(m_board[2][0] == ' ') {
				m_board[2][0] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 5) {
			if(m_board[2][2] == ' ') {
				m_board[2][2] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 6) {
			if(m_board[2][4] == ' ') {
				m_board[2][4] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 7) {
			if(m_board[4][0] == ' ') {
				m_board[4][0] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 8) {
			if (m_board[4][2] == ' ') {
				m_board[4][2] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else if (pos == 9) {
			if(m_board[4][4] == ' ') {
				m_board[4][4] = 'X';
			}
			else {
				std::cout << "Position already taken" << std::endl;
			}
		}
		else {
			std::cout << "Invalid position" << std::endl;
		}
	}
	bool TicTacToe::isBoardFull() {
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				if(m_board[i][j] == ' ') {
					return false;
				}
			}
		}
		return true;
	}
	bool TicTacToe::isWinner() {
		if (m_board[0][0] == 'X' && m_board[0][2] == 'X' && m_board[0][4] == 'X') {
			return true;
		}
		else if (m_board[2][0] == 'X' && m_board[2][2] == 'X' && m_board[2][4] == 'X') {
			return true;
		}
		else if (m_board[4][0] == 'X' && m_board[4][2] == 'X' && m_board[4][4] == 'X') {
			return true;
		}
		else if (m_board[0][0] == 'X' && m_board[2][0] == 'X' && m_board[4][0] == 'X') {
			return true;
		}
		else if (m_board[0][2] == 'X' && m_board[2][2] == 'X' && m_board[4][2] == 'X') {
			return true;
		}
		else if (m_board[0][4] == 'X' && m_board[2][4] == 'X' && m_board[4][4] == 'X') {
			return true;
		}
		else if (m_board[0][0] == 'X' && m_board[2][2] == 'X' && m_board[4][4] == 'X') {
			return true;
		}
		else if (m_board[0][4] == 'X' && m_board[2][2] == 'X' && m_board[4][0] == 'X') {
			return true;
		}
		else if (m_board[0][0] == 'O' && m_board[0][2] == 'O' && m_board[0][4] == 'o') {
			return true;
		}
		else if (m_board[2][0] == 'O' && m_board[2][2] == 'O' && m_board[2][4] == 'O') {
			return true;
		}
		else if (m_board[4][0] == 'O' && m_board[4][2] == 'O' && m_board[4][4] == 'O') {
			return true;
		}
		else if (m_board[0][0] == 'O' && m_board[2][0] == 'O' && m_board[4][0] == 'O') {
			return true;
		}
		else if (m_board[0][2] == 'O' && m_board[2][2] == 'O' && m_board[4][2] == 'O') {
			return true;
		}
		else if (m_board[0][4] == 'O' && m_board[2][4] == 'O' && m_board[4][4] == 'O') {
			return true;
		}
		else if (m_board[0][0] == 'O' && m_board[2][2] == 'O' && m_board[4][4] == 'O') {
			return true;
		}
		else if (m_board[0][4] == 'O' && m_board[2][2] == 'O' && m_board[4][0] == 'O') {
			return true;
		}
		else {
			return false;
		}
}