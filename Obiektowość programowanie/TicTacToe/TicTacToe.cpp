#include "TicTacToe.hpp"

CheckerState Board::check(int x, int y)
{
	return CheckerState();
}

bool Board::set(CheckerState cs, int x, int y)
{
	return false;
}

bool Board::isOver()
{
	return false;
}

bool Board::xWon()
{
	return false;
}

Player::Player()
{
	player1;
	player2;

}

bool Player::makeTurn(Board* board)
{
	return false;
}

void Game::swapPlayer()
{
}

void Game::start()
{
}

void Game::reset()
{
}
