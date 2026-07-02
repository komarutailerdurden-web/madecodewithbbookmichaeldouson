// programm game stats 3.0
// show working with constats
#include <iostream>
using namespace std;

int main()
{
	const int aliens_point = 10;
	int alienskilled = 10;
	int score = alienskilled * aliens_point;
	cout << "score: " << score << endl;
	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
	difficulty myDifficulty = UNBEATABLE;
	enum shipCost { Fighter_cost = 25, Bomber_cost, Cruiser_cost = 50 };
	shipCost myShipCost = Bomber_cost;
	cout << "\nTo upgrade my ship to a Cruiser will cost "
		<< (Cruiser_cost - myShipCost) << " Resource Points.\n";

	return 0;
}

//made by komarutailerdurden with michael dowson