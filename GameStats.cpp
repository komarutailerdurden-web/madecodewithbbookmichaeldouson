//programm Game stats 2.0 by book Michael Dowson
//show Show you variable declaration and intialization 
#include "iostream"
using namespace std;
int main()
{
	int score = 1555;
	cout << "score: " << score << endl;
	// changing the value of a variable
	score = score + 67;
	cout << "score: " << score << endl;
	//compound assignment operator
	score += 67;
	cout << "score: " << score << endl;
	//operators of the increment
	int lives = 1488;
	++lives;
	cout << "lives:  " << lives << endl;
	lives = 1488;
	int bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << "," << bonus << endl;
	//integer overflow
	score = 42671488;
	cout << "\nscore:" << score << endl;
	++score;
	cout << "score:" << score << endl;
	return 0;
}

// made by komarutailerdurden with help michael dowson
//26.07.02