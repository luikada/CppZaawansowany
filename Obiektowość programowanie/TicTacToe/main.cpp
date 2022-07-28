#include "TicTacToe.hpp"

int main()
{
	Player* p1 = new Player();
	Player* p2 = new Player();
	Game g(p1, p2);
	g.start();

	delete p1;
	delete p2;

	return 0;
}