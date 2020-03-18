#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctime>
using namespace std;

main(void){
	srand ( time(NULL) );
	int p; // final money
	int o; // -final money (if money < 0)
	char s;
	int a;
	int b;
	int c;
	int bet;
	char e;
	int money = 500;
	char curr;
	char response = 'Y';
	cout << "What do you want the currency to be?" << endl;
	cout << "For Euros press E, for Dollars press $, for Pounds press P and for Yenn press Y." << endl;
	cin >> curr;
	while (curr != 'E' and curr != 'e' and curr != '$' and curr != 'P' and curr != 'p' and curr != 'Y' and curr != 'y'){
		cout << "Wrong currency. Please enter a currency again." << endl;
		cin >> curr;
	}
	cout << "Your start with 500" << curr << endl;
	
	while (response == 'Y' or response == 'y'){
		cout << "How much do you want to bet?" << endl;
		cout << "Bet: ";
		cin >> bet;
		while (bet <= 0 or bet > money){
			while (bet > money){
				cout << "Enter a real bet! You can't afford the previous one." << endl;
				cout << "Bet: ";
				cin >> bet;
			}
			while (bet <= 0){
				cout << "That's not even a valid bet! Enter a real one!" << endl;
				cout << "Bet: ";
				cin >> bet;
			}
		}
		cout << "Press S to spin!" << endl;
		cin >> s;
		while(s!='S' and s!='s'){
			cout << "Oops.. wrong input. Press S to spin!" << endl;
			cin >> s;
		}
		if (s == 'S' or s == 's'){
			cout << endl;
			cout << "_________" << endl;
			a = rand() % 5;
			b = rand() % 5;
			c = rand() % 5;
			cout << "A   B   C" << endl;
			cout << "_________" << endl;
			cout << "_________" << endl;
			cout << a << " | " << b << " | " << c << endl;
			cout << "_________" << endl;
			cout << endl;
			if (a != b and a!= c and b != c){
				cout << "You have lost!" << endl;
				money -= bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to try again your luck press Y. Otherwise, if you want to exit the game press e." << endl;
				cin >> response;
				while (response != 'Y' and response != 'y' and response != 'E' and response != 'e'){
					cout << "You have entered a wrong input! Press either Y to play again or e to exit.." << endl;
					cin >> response;
				}
				if (response == 'e' or response == 'E'){
					cout << "Thanks for playing!" << endl;
					p = money - 500;
					if (p>0){
						cout << "You leave the slot-machine with your pockets heavier by " << p << curr << endl;
					}
					else if (p == 0) {
						cout << "You leave the slot-machine just as you came.. But look on the bright side: You had fun without spending a penny!" << endl;
					}
					else if (p < 0) {
						o = -p;
						cout << "Unfortunately, you have lost " << o << curr << " today. However you may come another day and earn a fortune!" << endl;
					}
					cout << "GOODBYE AND HOPE TO SEE YOU SOON!" << endl;
					exit(0);
				}
			}
			else if ((a == b and a != c) or (a == c and a != b) or (b == c and b!=a)){
				cout << "Congratulations! You have achieved a two-digit combination!" << endl;
				money = money + 10 * bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 100000 or money > 100000){
					cout << "You are the Slots King! You leave with your pockets full of gold and your heart full of pride." << endl;
					cout << "Hope to see you again! GOODBYE!" << endl;
					exit(0);
				}
				cout << "If you want to try again your luck press Y. Otherwise, if you want to exit the game press e." << endl;
				cin >> response;
				while (response != 'Y' and response != 'y' and response != 'E' and response != 'e'){
					cout << "You have entered a wrong input! Press either Y to play again or e to exit.." << endl;
					cin >> response;
				}
				if (response == 'e' or response == 'E'){
					cout << "Thanks for playing!" << endl;
					p = money - 500;
					if (p>0){
						cout << "You leave the slot-machine with your pockets heavier by " << p << curr << endl;	
					}
					else if (p == 0) {
						cout << "You leave the slot-machine just as you came.. But look on the bright side: You had fun without spending a penny!" << endl;
					}
					else if (p < 0) {
						o = -p;
						cout << "Unfortunately, you have lost " << o << curr << " today. However you may come another day and earn a fortune!" << endl;
					}
					cout << "GOODBYE AND HOPE TO SEE YOU SOON!" << endl;
					exit(0);
				}
			}
			else if (a == b and a == c){
				cout << "Wow! That's a Jackpot! You've earned 10.000" << curr << "!" << endl;
				money += 10000;
				cout << "Current money: " << money << curr << endl;
				if (money == 100000 or money > 100000){
					cout << "You are the Slots King! You leave with your pockets full of gold and your heart full of pride." << endl;
					cout << "Hope to see you again! GOODBYE!" << endl;
					exit(0);
				}
				cout << "If you want to try again your luck press Y. Otherwise, if you want to exit the game press e." << endl;
				cin >> response;
				while (response != 'Y' and response != 'y' and response != 'E' and response != 'e'){
					cout << "You have entered a wrong input! Press either Y to play again or e to exit.." << endl;
					cin >> response;
				}
				if (response == 'e' or response == 'E'){
					cout << "Thanks for playing!" << endl;
					p = money - 500;
					if (p>0){
						cout << "You leave the slot-machine with your pockets heavier by " << p << curr << endl;
					}
					else if (p == 0) {
						cout << "You leave the slot-machine just as you came.. But look on the bright side: You had fun without spending a penny!" << endl;
					}
					else if (p < 0) {
						o = -p;
						cout << "Unfortunately, you have lost " << o << curr << " today. However you may come another day and earn a fortune!" << endl;
					}
					cout << "GOODBYE AND HOPE TO SEE YOU SOON!" << endl;
					exit(0);
				}
			}
		}
	}	
}
