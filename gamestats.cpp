//programm Game Stats by book michael Douson (its not me)
//Show you variable declaration and intialization
#include <iostream>
using namespace std;
int main()
{
	int score;
	double distance;
	char PlayAgain;
	bool ShieldsUp;
	short lives, aliensKilled;
	score = 0;
	distance = 1200.76;
	PlayAgain = 'y';
	ShieldsUp = true;
	lives = 1488;
	aliensKilled = 1488;
	double engineTemp = 6767.89;
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "PlayAgain: " << PlayAgain << endl;
	//skip shieldsUp. Because boolean values
	//rules, are not displayed on the screen
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
	int fuel;
	cout << "\nHow much fuel?";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;




}
//made by komaridze with help  michael douson