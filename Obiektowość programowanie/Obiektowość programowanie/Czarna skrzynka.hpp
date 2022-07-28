#pragma once

class BlackBoxGuess
{
	int hiddenNumber=0;

public:
	BlackBoxGuess(int range);
	int is(int guess);

};