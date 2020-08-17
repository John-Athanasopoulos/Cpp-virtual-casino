#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
int main(){
	int choice; //choice of the player to play or not
	char a = 'Y';//var to play again
	int inst = 5;//var to check for 5 cards held by the player
	int money = 500;
	char m; // currency
	int t; //final money in comparison with the starting 500 pounds
	int s; // -t in case t < 0
	while (money < 1000 and money > 0){
	int bet;
	cout << "WELCOME TO A GAME OF BLACKJACK!" << endl;
	cout << "Do you want to play?" << endl;
	cout << "Press 1 to start." << endl;
	cin >> choice;
	if (choice == 1){
	cout << "Select currency. For Euros press E, for Dollars press $, for Pounds press P and for Yenn press Y: " << endl;
	cin >> m;
	while (m!='E' and m!='e' and m!='$' and m!='Y' and m!='y' and m!='P' and m!='p'){
		cout << "Wrong type of currency. Either press E, $, P or Y." << endl;
		cin >> m;
	}
	cout << "You enter one of the least well-known bars of your area, the Thirsty Rat." << endl;
	cout << "John, the bar-keeper, greets you from across the room and serves you a scotch."<< endl;
	cout << "'Fancy some Black Jack?', he asks. 'Bring it on..' " << endl;
	cout << "Current money: " << money << m << endl;
	while ((choice == 1 or a =='Y')or a =='y'){ //choice = 1 to play and a = y to play again
	cout << "How much do you wanna bet?" << endl;
	cin >> bet;
	if (bet <= money && bet > 0){
	srand(time(NULL));
	int sum1,sum2; // sum1=player's hand and sum2=dealer's hand
	int response;//response = 1 --> hit, or 2 --> don't hit
	sum2 = 0;
	cout << "Your hand is: 0";
	sum1 = 0;
		cout << endl;
		cout << "Press 1 to start." << endl;
		cin >> response;
		if (response == 1){
		inst = 5;
		sum1 = sum1 + rand() % 10 + 1;
		inst -= 1;
		cout << "Your hand is: " << sum1 << endl;
		cout << "Do you want me to hit you?" << endl;
		cout << "(Answer with 1 for Yes or 2 for No.)";
		cin >> response;		
		while (response == 1){	//calculation of player's hand		
			if (sum1 != 1 and sum1 != 10 and sum1 <=21){  //hand is not 1 or 10 and <= 21
				sum1 = sum1 + rand() % 10 + 1;
				inst -= 1;
				if (sum1 > 21){  //player's hand > 21 --> loss
					cout << "Your hand is: " << sum1 << endl;
					cout << "Game Over..." << endl;
					money = money - bet;
					cout << "Current money: " << money << m << endl;
					if (money == 0){  // and if money = 0 too, End of Game
						cout << "You have no money left.. But hey, you can come again tomorrow." << endl;
						cout << "A new day means a lot of new opportunities..." << endl;
						cout << "If you want to play again restart the game.." << endl;
						cout << "Press e to exit the game." << endl;
						char e;
						cin >> e;
						while(e!='e' and e!='E'){
							cout << "Incorrect input.. Press e to exit the game" << endl;
							cin >> e;
							return e;
							}
						if (e=='e' or e=='E'){
							cout << "You leave the Thirsty Rat with: " << money << m << endl;
							t = money - 500;
							s = -t;
							if (t < 0){
								cout << "Today you have lost " << s << m << endl;
							}
							else if (t == 0){
								cout << "Today you have neither lost now gained any money.." << endl;
							}
							else{
								cout << "Today you have won " << t << m << endl;
							}
							cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
							exit(0);
						}
					}
					break;
				}
				if (inst == 0){  // 5 cards in the player's hand --> win
					cout << "Your hand is: " << sum1 << endl;
					cout << "You've picked up 5 cards. You win!" << endl;
					money += bet;
					cout << "Current money: " << money << m << endl;
					break;
				}
				cout << "Your hand is: " << sum1 << endl;
				cout << "Do you want me to hit you?" << endl;
				cout << "(Answer with 1 for Yes or 2 for No.)";
				cin >> response; // restart the while loop with a new response
			}
			if (sum1 == 1){ // check for Ace + 10 or two Aces
				sum1 = sum1 + rand() % 10 + 1;
				if (sum1 == 11){
					sum1 = 21;
					cout << "You've got an Ace and a 10 so your hand is: " << sum1 << endl;  // Ace + 10
					money += bet;
					cout << "Your current money is: " << money << m <<endl;
					break;
				}
				else if (sum1 == 2){
					sum1 = 21;
					cout << "Black Jack! You've got two Aces so your hand is: " << sum1 << endl;   //2 Aces
					money += bet;
					cout << "Your current money is: " << money << m << endl;
					break;
				}
				else {
					cout << "Your hand is: " << sum1 << endl;
					cout << "Do you want me to hit you?" << endl;
					cout << "(Answer with 1 for Yes or 2 for No.)";
					cin >> response; // response to restart
				}
			}
			else if (sum1 == 10){ // another check for 10 + Ace
				sum1 = sum1 + rand() % 10 + 1;
				if (sum1 == 11){
					sum1 = 21;
					cout << "You've got an Ace and a 10 so your hand is: " << sum1 << endl;  // 10 + Ace
					money += bet;
					cout << "Your current money is: " << money << m << endl;
					break;
				}
				else {
					cout << "Your hand is: " << sum1 << endl;
					cout << "Do you want me to hit you?" << endl;
					cout << "(Answer with 1 for Yes or 2 for No.)";
					cin >> response; // response to restart
				}
			}
		}
		while (response == 2){  //when response = 2, player's hand is const and we begin the calculation of dealer's hand
			if (sum2 < sum1){ //if the dealer's hand is lower than the player's, draw another card
				sum2 = sum2 + rand() % 10 + 1;
				if (sum2 < sum1){
					if (sum2 == 1){	// check for Ace + 10
						sum2 = sum2 + rand() % 10 + 1;
						if (sum2 = 11){
							sum2 = 21;
						}						
					}
					else if (sum2 == 10){  // check for 10 + Ace
						sum2 = sum2 + rand() % 10 + 1;
						if (sum2 == 11){
							sum2 = 21;
						}				
					}		
				}
					if (sum2 < sum1){ // if sum2 < sum 1 draw another card for the dealer
						sum2 = sum2 + rand() % 10 + 1;
						}
					else if (sum2 >= sum1 && sum2 <= 21){ // conditions for dealer's win
						cout << "The Dealer's hand is: " << sum2 << endl;
						cout << "Game Over..." << endl;
						money = money - bet;
						cout << "Current money: " << money << m << endl;
						if (money == 0){  //if money = 0 End of Game
							cout << "You have no money left.. But hey, you can come again tomorrow." << endl;
							cout << "A new day means a lot of new opportunities..." << endl;
							cout << "If you want to play again restart the game.." << endl;
							cout << "Press e to exit the game." << endl;
							char e;
							cin >> e;
							while(e!='e' and e!='E'){
								cout << "Incorrect input.. Press e to exit the game" << endl;
								cin >> e;
								return e;
							}
							if (e=='e' or e=='E'){
								cout << "You leave the Thirsty Rat with: " << money << m << endl;
								t = money - 500;
								s = -t;
								if (t < 0){
									cout << "Today you have lost " << s << m << endl;
								}
								else if (t == 0){
									cout << "Today you have neither lost now gained any money.." << endl;
								}
								else{
									cout << "Today you have won " << t << m << endl;
								}
								cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
								exit(0);
							}
						}
						break;					
					}
					else if (sum2 > 21){ //dealer's hand is over 21 so the dealer loses
						cout << "The Dealer's hand is: " << sum2 << endl;
						cout << "You win!";
						money = money + bet;
						cout << "Current money: " << money << m << endl;
						if (money >= 1000){ // if money > 1000 End of Game
							cout << "Congrats! You've earned enough for today!" << endl;
							cout << "If you want to play again restart the game.." << endl;
							cout << "Press e to exit the game." << endl;
							char e;
							cin >> e;
							while(e!='e' and e!='E'){
								cout << "Incorrect input.. Press e to exit the game" << endl;
								cin >> e;
								return e;
							}
							if (e=='e' or e=='E'){
								cout << "You leave the Thirsty Rat with: " << money << m << endl;
								t = money - 500;
								s = -t;
								if (t < 0){
									cout << "Today you have lost " << s << m << endl;
								}
								else if (t == 0){
									cout << "Today you have neither lost now gained any money.." << endl;
								}
								else{
									cout << "Today you have won " << t << m << endl;
								}
								cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
								exit(0);
							}
						}
						break;
					}	
				}	
				else if (sum2 >= sum1 && sum2 <= 21){ // some more conditions for dealer's win
					cout << "The Dealer's hand is: " << sum2 << endl;
					cout << "Game Over...";
					money = money - bet;
					cout << "Current money: " << money << m << endl;
					if (money == 0){
						cout << "You have no money left.. But hey, you can come again tomorrow." << endl;
						cout << "A new day means a lot of new opportunities..." << endl;
						cout << "If you want to play again restart the game.." << endl;
						cout << "Press e to exit the game." << endl;
						char e;
						cin >> e;
						while(e!='e' and e!='E'){
						cout << "Incorrect input.. Press e to exit the game" << endl;
							cin >> e;
							return e;
						}
						if (e=='e' or e=='E'){
							cout << "You leave the Thirsty Rat with: " << money << m << endl;
							t = money - 500;
							int s = -t;
							if (t < 0){
								cout << "Today you have lost " << s << m << endl;
							}
							else if (t == 0){
								cout << "Today you have neither lost now gained any money.." << endl;
							}
							else{
								cout << "Today you have won " << t << m << endl;
							}
							cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
							exit(0);
						}
					}
					break;					
				}
				else if (sum2 > 21){
					cout << "The Dealer's hand is: " << sum2 << endl;
					cout << "You win!";
					money = money + bet;
					cout << "Current money: " << money << m << endl;
						if (money >= 1000){
							cout << "Congrats! You've earned enough for today!" << endl;
							cout << "If you want to play again restart the game.." << endl;
							cout << "Press e to exit the game." << endl;
							char e;
							cin >> e;
							while(e!='e' and e!='E'){
								cout << "Incorrect input.. Press e to exit the game" << endl;
								cin >> e;
								return e;
							}
							if (e=='e' or e=='E'){
								cout << "You leave the Thirsty Rat with: " << money << m << endl;
								t = money - 500;
								int s = -t;
								if (t < 0){
									cout << "Today you have lost " << s << m << endl;
								}
								else if (t == 0){
									cout << "Today you have neither lost now gained any money.." << endl;
								}
								else{
									cout << "Today you have won " << t << m << endl;
								}
								cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
								exit(0);
							}
						}
					break;
				}	
			}
		}
		else if (response != 1){ //if response is not 1 force exit
			cout << "Your input was wrong. Please restart the game.";
			cout << "Press e to exit the game." << endl;
				char e;
				cin >> e;
				while(e!='e' and e!='E'){
					cout << "Incorrect input.. Press e to exit the game" << endl;
					cin >> e;
					return e;
				}
				if (e=='e' or e=='E'){
					cout << "You leave the Thirsty Rat with: " << money << m << endl;
					t = money - 500;
					int s = -t;
					if (t < 0){
						cout << "Today you have lost " << s << m << endl;
					}
					else if (t == 0){
						cout << "Today you have neither lost now gained any money.." << endl;
					}
					else{
						cout << "Today you have won " << t << m << endl;
					}
					cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
					exit(0);
				}
		}
		}
		else if (bet > money) {  // the bet is bigger than the money --> fail
			cout << "Check your pockets and tell me how much you can really bet." << endl;
		}
		else if (bet <= 0) { // negative bet --> fail
			cout << "Come on... bet something and stop wasting my time." << endl;
		}
		else if (money == 0){
			break;
		}
		else {
			cout << "Are you serious? Bet something or exit the bar!" << endl;
		}
		cout << "Start new round? If yes press Y." << endl;
		cout << "However, if you want to exit the game press e." << endl;
		cin >> a; //previously a = 'Y'. now the restart or the exit depends solely on the new value of a
		while((a!='Y' and a!= 'y') and (a!='e' and a!='E')){
			cout << "Incorrect input.. If you want to start a new round press Y. Alternatively, if you want to exit the game press e." << endl;
			cin >> a;
			return a;
		}
		if (a=='e' or a=='E'){
			cout << "You leave the Thirsty Rat with: " << money << m << endl;
			t = money - 500;
			int s = -t;
			if (t < 0){
				cout << "Today you have lost " << s << m << endl;
			}
			else if (t == 0){
				cout << "Today you have neither lost now gained any money.." << endl;
			}
			else{
				cout << "Today you have won " << t << m << endl;
			}
			cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
			exit(0);
		}
	}
		cout << "Your input was wrong. Please restart the game."; // choice is not equal to 1 --> force exit
		cout << "Press e to exit the game." << endl;
		char e;
		cin >> e;
		while(e!='e' and e!='E'){
			cout << "Incorrect input.. Press e to exit the game" << endl;
			cin >> e;
			return e;
		}
		if (e=='e' or e=='E'){
			cout << "You leave the Thirsty Rat with: " << money << m << endl;
			t = money - 500;
			s = -t;
			if (t < 0){
				cout << "Today you have lost " << s << m << endl;
			}
			else if (t == 0){
				cout << "Today you have neither lost nor gained any money.." << endl;
			}
			else{
				cout << "Today you have won " << t << m << endl;
			}
			cout << "GOODBYE AND THANKS FOR PLAYING!" << endl;
			exit(0);
		}
	}
	}
	return 0;
}
