#include "Common.h"
#include "initialize.h"
#include "shuffle.h"
#include "cardvalue.h"
#include "draw.h"
#include "playeradd.h"
#include "aiadd.h"

int main()
{
	initialize();

	shuffle();
	
	cardvalue();

	draw();

	playeradd();

	aiadd();

	// winner decision
	if (PlayerSum > 21)
	{
		cout << "Player Lost: greater than 21" << endl;
		cout << "Player: " << PlayerSum << endl;
		cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;
		cout << AI[0] << " " << AI[1] << " " << AI[2] << endl;
		return -1;
	}
	if (AISum > 21)
	{
		cout << "AI Lost: greater than 21" << endl;
		cout << "AI: " << AISum << endl;
		cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;
		cout << AI[0] << " " << AI[1] << " " << AI[2] << endl;
		return -1;
	}
	else if (PlayerSum == AISum)
	{
		cout << "Tie: Player - " << PlayerSum << " & AI - " << AISum << endl;
		cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;
		cout << AI[0] << " " << AI[1] << " " << AI[2] << endl;
	}
	else if (PlayerSum > AISum)
	{
		cout << "Winner: Player  - " << PlayerSum << endl;
		cout << "AI: " << AISum << endl;
		cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;
		cout << AI[0] << " " << AI[1] << " " << AI[2] << endl;
	}
	else
	{
		cout << "Winner: AI  - " << AISum << endl;
		cout << "Player: " << PlayerSum << endl;
		cout << Player[0] << " " << Player[1] << " " << Player[2] << endl;
		cout << AI[0] << " " << AI[1] << " " << AI[2] << endl;
	}

	return 0;
}