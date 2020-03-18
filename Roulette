#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;

struct iequal{
    bool operator()(int c1, int c2) const{
        // case insensitive comparison of two characters.
        return std::toupper(c1) == std::toupper(c2);
    }
};

bool iequals(const std::string& str1, const std::string& str2){
    // use std::equal() to compare range of characters using the functor above.
    return std::equal(str1.begin(), str1.end(), str2.begin(), iequal());
}

main(void){
	srand ( time(NULL) );
	string colorW; // winning color
	int numberW; // winning number
	string colorP; //the color of the player's bet
	string colorP2;
	string colorP3;
	string colorP4;
	string colorP5;
	string colorP6;
	int numberP; // the number of the player's bet
	int numberP2;
	int numberP3;
	int numberP4;
	int numberP5;
	int numberP6;
	int bettype;
	int money = 500;
	int bet;
	int x;
	int y;
	int z;
	int q; // checks if colorW == colorP or colorP2 in bettype2
	string resp = "No";
	char curr;
	string rep = "Yes";
	cout << "Enter the currency you want to use. Press E for Euros, $ for Dollars, P for Pounds, and Y for Yenn." << endl;
	cout << "Currency: ";
	cin >> curr;
	while (curr != 'E' and curr!='e' and curr!='$' and curr!='p' and curr!='P' and curr!='Y' and curr!='y'){
		cout << "Your entry was wrong. Enter a valid curency for the game." << endl;
		cout << "Currency: ";
		cin >> curr;
	}
	cout << " " << endl;
	cout << "Hello and welcome to the Roulette!" << endl;
	cout << "Your current money is: " << money << curr << endl;
	cout << "Here are the rules and the types of bets: " << endl;
	cout << "" << endl;
	while (rep == "yes" or rep == "Yes"){
		srand ( time(NULL) );
		resp = "No";
		cout << "The Types of Roulette Bets: " << endl;
		cout << "1. Straight (1 number): 35-1 payout (pays your original bet PLUS 9*bet units)." << endl;
		cout << "2. Split (2 numbers): 17-1 payout (pays your original bet PLUS 4*bet units)." << endl;
		cout << "3. Street (3 numbers): 11-1 payout (pays your original bet PLUS 2*bet units)." << endl;
		cout << "4. Square (4 numbers): 8-1 payout (pays your original bet PLUS 1*bet units)." << endl;
		cout << "5. Six Line (6 numbers): 5-1 payout (pays your original bet PLUS 0.5*bet units)." << endl;
		cout << "6. Colours (18 numbers): 1:1 payout (pays your original bet PLUS 0.2*bet unit)." << endl;
		cout << "7. Dozens (12 Numbers): 2-1 payout (pays your original bet PLUS 0.25*bet units)." << endl;
		cout << "8. Highs / Lows (1-18 or 19-36): 1-1 payout (pays your original bet PLUS 0.2*bet unit)." << endl;
		cout << "9. Odds/Evens (18 numbers): 1-1 payout (pays your original bet PLUS 0.2*bet unit)." << endl;
		cout << "10. Columns (12 numbers): 2-1 payout (pays your original bet PLUS 2 units)." << endl;
		cout << "" << endl;
		cout << "				Roulette Table" << endl;
		cout << "		0";
		for (int t=1; t<=6; t++){
			cout << "|R" << 2+3*(t-1) << "|B" << 3+3*(t-1);
		}
		cout << "|" << endl;
		cout << "		X";
		for (int r = 1; r <= 6; r++){
			cout << "|B" << 1+3*(r-1) << "|R" << 3+3*(r-1);
		}
		cout << "|" << endl;
		cout << "		0";
		for (int m=1;m<=6;m++){
			cout << "|R" << 1+3*(m-1) << "|B" << 2+3*(m-1);
		}
		cout << "|" << endl << endl;
		cout << "Choose the type of bet you want, writing the corresponding number below: " << endl;
		while (resp == "No" or resp == "no"){
			cout << "Bet Type: ";
			cin >> bettype;
			while (bettype>18 or bettype<1){
				cout << "The type of bet is invalid. Please try a valid bet type (1-10)." << endl;
				cout << "Bet Type: ";
				cin >> bettype;
			}
			cout << "Are you sure this is the type of bet you desire? If yes press Yes, or else press No." << endl;
			cout << "Response: ";
			cin >> resp;
			while (resp != "Yes" and resp != "yes" and resp != "No" and resp!="no"){
				cout << "Wrong input.. Enter Yes to confirm the bet, or No to choose a new one." << endl;
				cin >> resp;
			}
		}
		cout << "How much do you want to bet?" << endl;
		cout << "Bet: ";
		cin >> bet;
		while (bet > money){
			cout << "You can't afford this bet! Check your pockets and enter a valid bet." << endl;
			cout << "Current money: " << money << curr;
		}
		if (bettype == 1){
			cout << "Choose the color of your Bet (Black and Red or Green '0'): ";
			cin >> colorP;
			while (colorP != "Black" and colorP!="black" and colorP!="Red" and colorP!="red" and colorP!="Green" and colorP!="green"){
				cout << "The color seems wrong. Enter a valid entry for the color." << endl;
				cin >> colorP;
			}
			if (colorP == "Green" or colorP == "green"){
				numberP = 0;
			}
			else {
				cout << endl;
				cout << "Choose the number of your Bet (must be 1-18): ";
				cin >> numberP;	
				while(numberP > 18 and numberP < 1){
					cout << "The number is incorrect as it has to belong in [1,18] and be an integer. Enter a new number.";
					cin >> numberP;
				}
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			
			if(iequals(colorW,colorP)){
			       q=1;  
			}
			else{
			    q=0;
			}
			
			if (numberP == numberW and q == 1){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 10 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if (numberW != numberP or q == 0){
				cout << "You have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money -= bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 2){
			cout << "The types of bets can be: Black-Red or Red-Green. This type of bet is like the example: " << endl;
			cout << "Example: Red 1 and Black 2, or Black 2 and Red 3, or Red 2 and Black 4 etc. (or Red 1-Green 0 and Red 2-Green 0)" << endl;
			cout << "Enter what you want your first bet colour to be: Black, Red or Green." << endl;
			cout << "First color: ";
			cin >> colorP;
			while (colorP != "Black" and colorP!="black" and colorP!="Red" and colorP!="red" and colorP!="Green" and colorP!="green"){
				cout << "The entry was wrong. Please try entering a valid color." << endl;
				cout << "First Color: ";
				cin >> colorP;
			}
			if (colorP == "Green" or colorP == "green"){
				numberP = 0;
				colorP2 = "Red";
				cout << "The first bet is Green 0. The second one can be either Red 1 or Red 2. Pick which number you want to bet on." << endl;
				cout << "Second Number: ";
				cin >> numberP2;
				while (numberP2!=1 and numberP2!=2){
					cout << "Your entry was wrong. You must select either Red 1 or Red 2." << endl;
					cout << "Second number: ";
					cin >> numberP2;
				}
			}
			else{
				if (colorP == "Red" or colorP == "red"){
					cout << "Enter the first bet's number: ";
					cin >> numberP;
					while (numberP < 1 and numberP > 18){
						cout << "Your entry was wrong. Please enter a correct number for your bet." << endl;
						cout << "First bet's number: ";
						cin >> numberP;
					}
					if (numberP== 1){
						cout << "The possible second bets are: Green 0, Black 1, Black 2. Select the number you want for the second bet." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						while (numberP2 != 0 and numberP2!= 1 and numberP2 != 2){
							cout << "Please select a valid number for your second bet." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
						if (numberP2 == 0){
							colorP2 = "Green";
						}
						else if (numberP2 == 2 or numberP2 == 1){
							colorP2 = "Black";
						}
					}
					else if (numberP == 2){
						cout << "The possible second bets are: Green 0, Black 1 and Black 3. Select the number you want for the second bet." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						while (numberP2 < 1 or numberP2 > 18){
							cout << "Please select a valid number for your second bet." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
						if (numberP2 == 0){
							colorP2 = "Green";
						}
						else if (numberP2 == 1 or numberP2 == 3){
							colorP2 == "Black";
						}
					}
					else if (numberP % 3 == 0 and numberP != 18){
						cout << "The possible second bets are all Black color and the numbers are: " << numberP - 2 << ", " << numberP - 1 << ", " << numberP << "and " << numberP + 1 << "." << endl;
						cout << "Second bet's number: ";
						colorP2 = "Black";
						cin >> numberP2;
						while ((numberP2 <1 or numberP2 > 18) or (numberP2 != numberP - 2 and numberP2 != numberP -1 and numberP2 != numberP and numberP2 != numberP + 1)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP == 18){
						cout << "The possible second bets are all Black color and the numbers are: 16, 17 and 18."<< endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Black";
						while ((numberP2 < 1 and numberP2 > 18) or (numberP2 != 16 and numberP2 != 17 and numberP != 18)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP % 3 == 2 and numberP != 2){
						cout << "The possible second bets are all Black color and the numbers are: " << numberP - 2 << ", " << numberP - 1 << ", " << numberP + 1 << "." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Black";
						while((numberP2 < 1 or numberP2 > 18) or (numberP2!= numberP - 2 and numberP2 != numberP - 1 and numberP2 != numberP + 1)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP % 3 == 1 and numberP != 1){
						cout << "The possible second bets are all Black color and the numbers are: " << numberP - 2 << ", " << numberP << ", " << numberP + 1 << "." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Black";
						while((numberP2 < 1 or numberP2 > 18) or (numberP2!= numberP - 2 and numberP2 != numberP and numberP2 != numberP + 1)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
				}
				else if (colorP == "Black" or colorP == "black"){
					cout << "Enter the first bet's number: ";
					cin >> numberP;
					while (numberP < 1 and numberP > 18){
						cout << "Your entry was wrong. Please enter a correct number for your bet." << endl;
						cout << "First bet's number: ";
						cin >> numberP;
					}
					if (numberP == 1){
						cout << "The possible second bets are all Red and the numbers are: 1, 2 and 3." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 <1 or numberP2 > 18) or (numberP2 != 1 and numberP2 != 2 and numberP2 != 3)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP % 3 == 1 and numberP != 1){
						cout << "The possible second bets are all Red and the numbers are: " << numberP - 1 << ", " << numberP << ", " << numberP+1 << ", " << numberP+2 << "." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 < 1 or numberP2 > 18) or (numberP2!=numberP-1 and numberP2!=numberP and numberP2!=numberP+1 and numberP2!=numberP+2)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP % 3 == 0 and numberP != 18){
						cout << "The possible second bets are all Red and the numbers are: " << numberP - 1 << ", " << numberP << ", " << numberP+2 << "." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 < 1 or numberP2 > 18) or (numberP2!=numberP-1 and numberP2!=numberP and numberP2!=numberP+2)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP == 18){
						cout << "The possible second bets are all Red and the numbers are: 17 and 18." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 < 1 or numberP2 > 18) or (numberP2!=17 and numberP2 != 18)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP % 3 == 2 and numberP != 17){
						cout << "The possible second bets are all Red and the numbers are: " << numberP - 1 << ", " << numberP+1 << ", " << numberP+2 << "." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 < 1 or numberP2 > 18) or (numberP2!=numberP-1 and numberP2!=numberP+1 and numberP2!=numberP+2)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
					else if (numberP == 17){
						cout << "The possible second bets are all Red and the numbers are: 16 and 18." << endl;
						cout << "Second bet's number: ";
						cin >> numberP2;
						colorP2 = "Red";
						while ((numberP2 < 1 or numberP2 > 18) or (numberP2 != 16 and numberP2 != 17)){
							cout << "Your input was wrong. Enter a correct number." << endl;
							cout << "Second bet's number: ";
							cin >> numberP2;
						}
					}
				}	
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			
			if(iequals(colorW,colorP)){
			    q=1;  
			}
			else if (iequals(colorW,colorP2)){
				q=2;
			}
			else{
			    q=0;
			}
			   
			if ((numberW == numberP and q == 1) or (numberW == numberP2 and q == 2)){
			   	cout << "Congratulations! You won! The winning combination was: " << colorW << " " << numberW << endl;
			   	money = money + 5*bet;
			   	cout << "Current money: " << money << curr << endl;
			   	cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
			   	cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 3){
			int street;
			cout << endl << "With this type of bet you bet on one of the following triads:" << endl;
			cout << " 1.R1-B1-R2      \n 2.B2-R3-B3      \n 3.R4-B4-R5      \n 4.B5-R6-B6" << endl;
			cout << " 5.R7-B7-R8      \n 6.B8-R9-B9      \n 7.R10-B10-R11   \n 8.B11-R12-B12" << endl;
			cout << " 9.R13-B13-R14  \n10.B14-R15-B15  \n11.R16-B16-R17  \n12.B17-R18-B18" << endl;
			cout << endl << "You can choose which 3-digit 'Street' you want, by entering the corresponding number below: " << endl;
			cout << "Street: ";
			cin >> street;
			while (street > 12 or street < 1){
				cout << "Invalid entry for the street. Please select one of the numbers above." << endl;
				cin >> street;
			}
			int streetdiv;
			if (street % 2 == 1){
				streetdiv = street / 2;
				colorP = "Red";
				numberP = 1 + 3 * streetdiv;
				colorP2 = "Black";
				numberP2 = 1 + 3 * streetdiv;
				colorP3 = "Red";
				numberP3 = 2 + 3 * streetdiv;
			}
			else if (street % 2 == 0){
				streetdiv = street / 2;
				colorP = "Black";
				numberP = 2 + 3 * (streetdiv - 1);
				colorP2 = "Red";
				numberP2 = 3 + 3 * (streetdiv - 1);
				colorP3 = "Black";
				numberP3 = 3 + 3 * (streetdiv - 1);
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			
			if ((numberW == numberP and colorW == colorP) or (numberW == numberP2 and colorW == colorP2) or (numberW == numberP3 and colorW == colorP3)){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 3 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 4){
			int squarenum;
			cout << "The possible bets with this choice are: " << endl;
			for(int i = 1; i<=5;i++){
				cout <<  4*i-3 << ". B" << 1+3*(i-1) << "-R" << 2+3*(i-1) << "-B" << 3*i << "-R" << 3*i << endl;
				cout << 4*i-2 << ". R" << 1 + 3*(i-1) << "-B" << 1+3*(i-1) << "-R" << 3*i << "-B" << 2+3*(i-1) << endl;
				cout << 4*i-1 << ". R" << 3*i << "-B" << 3*i << "-R" << 5+3*(i-1) << "-B" << 4+3*(i-1) << endl;
				cout << 4*i << ". B" << 2+3*(i-1) << "-R" << 3*i << "-B" << 4+3*(i-1) << "-R" << 4+3*(i-1) << endl;
			}
			cout << "21. B16-R17-B18-R18" << endl;
			cout << "22. R16-B16-R18-B17" << endl;
			cout << endl << "Choose the type of Square Bet you want, entering the corresponding number below:" << endl;
			cout << "Square bet Number: ";
			cin >> squarenum;
			while (squarenum < 1 or squarenum > 22){
				cout << "You have entered a wrong number. Please choose one of the above Square Bets (1-22)" << endl;
				cout << "Square bet Number: ";
				cin >> squarenum;
			}
			int squarediv = squarenum / 4;
			if (squarenum % 4 == 1 and squarenum != 21){
				colorP = "Black";
				colorP2 = "Red";
				colorP3 = "Black";
				colorP4 = "Red";
				numberP = 1+3*(squarenum - 1);
				numberP2 = 2+3*(squarenum - 1);
				numberP3 = 3*squarenum;
				numberP4 = 3*squarenum;
			}
			else if (squarenum % 4 == 2 and squarenum != 22){
				colorP = "Red";
				colorP2 = "Black";
				colorP3 = "Red";
				colorP4 = "Black";
				numberP = 1 + 3*(squarenum-1);
				numberP2 = 1+3*(squarenum-1);
				numberP3 = 3*squarenum;
				numberP4 = 2+3*(squarenum-1);
			}
			else if (squarenum % 4 == 3){
				colorP = "Red";
				colorP2 = "Black";
				colorP3 = "Red";
				colorP4 = "Black";
				numberP = 3*squarenum;
				numberP2 = 3*squarenum;
				numberP3 = 5 + 3*(squarenum-1);
				numberP4 = 4 + 3*(squarenum-1);
			}
			else if (squarenum % 4 == 0){
				colorP = "Black";
				colorP2 = "Red";
				colorP3 = "Black";
				colorP4 = "Red";
				numberP = 2 + 3*(squarenum-1);
				numberP2 = 3*squarenum;
				numberP3 = 4 + 3*(squarenum-1);
				numberP4 = 4 + 3*(squarenum-1);
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if ((numberW == numberP and colorW == colorP) or (numberW == numberP2 and colorW == colorP2) or (numberW == numberP3 and colorW == colorP3) or (colorP4 == colorW and numberP4 == numberW)){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 2 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 5){
			int sixline;
			int sixdiv;
			cout << "The possible combinations of bets for this bet type are:" << endl << endl;
			for (int j = 1; j <= 5; j++){
				cout << 2*j-1 << "." << "R" << 1+3*(j-1) << "-B" << 1+3*(j-1) << "-R" << 2+3*(j-1) << "-B" << 2+3*(j-1) << "-R" << 3*j << "-B" << 3*j << endl;
				cout << 2*j << "." << "B" << 2+3*(j-1) << "-R" << 3*j << "-B" << 3*j << "-R" << 4+3*(j-1) << "-B" << 4+3*(j-1) << "-R" << 5+3*(j-1) << endl;
			}
			cout << "11.R16-B16-R17-B17-R18-B18" << endl;
			cout << endl << "Choose the Six Line Bet you want, entering the corresponding number below (1-11):" << endl;
			cout << "Six Line Number: ";
			cin >> sixline;
			while (sixline < 1 or sixline > 11){
				cout << "The number you have entered is wrong. Please select one of the bets above (1-11)." << endl;
				cout << "Six Line Number: ";
				cin >> sixline;
			}
			sixdiv = sixline / 2;
			if(sixline % 2 == 1 and sixline != 11){
				colorP = "Red";
				colorP2 = "Black";
				colorP3 = "Red";
				colorP4 = "Black";
				colorP5 = "Red";
				colorP6 = "Black";
				numberP = 1+3*(sixdiv-1);
				numberP2 = 1+3*(sixdiv-1);
				numberP3 = 2+3*(sixdiv-1);
				numberP4 = 2+3*(sixdiv-1);
				numberP5 = 3*sixdiv;
				numberP6 = 3*sixdiv;
			}
			if(sixline % 2 == 0){
				colorP = "Black";
				colorP2 = "Red";
				colorP3 = "Black";
				colorP4 = "Red";
				colorP5 = "Black";
				colorP6 = "Red";
				numberP = 2+3*(sixdiv-1);
				numberP2 = 3*sixdiv;
				numberP3 = 3*sixdiv;
				numberP4 = 4+3*(sixdiv-1);
				numberP5 = 4+3*(sixdiv-1);
				numberP6 = 5+3*(sixdiv-1);
			}
			if (sixline == 11){
				colorP = "Red";
				colorP2 = "Black";
				colorP3 = "Red";
				colorP4 = "Black";
				colorP5 = "Red";
				colorP6 = "Black";
				numberP = 16;
				numberP2 = 16;
				numberP3 = 17;
				numberP4 = 17;
				numberP5 = 18;
				numberP6 = 18;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if ((numberW == numberP and colorW == colorP) or (numberW == numberP2 and colorW == colorP2) or (numberW == numberP3 and colorW == colorP3) or (colorP4 == colorW and numberP4 == numberW) or (colorW == colorP5 and numberP5 == numberW) or (numberP6 == numberW and colorP6 == colorW)){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.5 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 6){
			string colours;
			cout << "In this bettype you have to choose one of the two colors and the number of the winning combination plays no part." << endl;
			cout << "You want to bet on Black or Red?: ";
			cin >> colours;
			while (colours != "Black" and colours!="black" and colours!="Red" and colours!="red"){
				cout << "Oops.. Seems like you have entered another string other than 'Black' or 'Red'. Choose one of the two and enter it below." << endl;
				cout << "You want to bet on Black or Red?: ";
				cin >> colours;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			
			if(iequals(colorW,colours)){
			    q=1;  
			}
			else{
			    q=0;
			}
			
			if (q == 1){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.2 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 7){
			int dozens;
			cout << "Choose among the 3 dozens of numbers:" << endl;
			cout << endl << "1. Red: 1-6" << endl << "   Black: 1-6" << endl;
			cout << "2. Red: 7-12" << endl << "   Black: 7-12" << endl;
			cout << "3. Red: 13-18" << endl << "   Black: 13-18" << endl << endl;
			cout << "Dozen Number:";
			cin >> dozens;
			while (dozens < 1 or dozens > 3){
				cout << "The dozen number is invalid. Enter a number from 1 to 3." << endl;
				cout << "Dozen Number: ";
				cin >> dozens;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if (dozens == 1 and ((colorW == "Red" and (numberW == 1 or numberW == 2 or numberW == 3 or numberW == 4 or numberW == 5 or numberW == 6)) or (colorW == "Black" and (numberW == 1 or numberW == 2 or numberW == 3 or numberW == 4 or numberW == 5 or numberW == 6)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if (dozens == 2 and ((colorW == "Red" and (numberW == 7 or numberW == 8 or numberW == 9 or numberW == 10 or numberW == 11 or numberW == 12)) or (colorW == "Black" and (numberW == 7 or numberW == 8 or numberW == 9 or numberW == 10 or numberW == 11 or numberW == 12)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if (dozens == 3 and ((colorW == "Red" and (numberW == 13 or numberW == 14 or numberW == 15 or numberW == 16 or numberW == 17 or numberW == 18)) or (colorW == "Black" and (numberW == 18 or numberW == 13 or numberW == 14 or numberW == 15 or numberW == 16 or numberW == 17)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 8){
			string HL;
			cout << "Betting in Highs-Lows is easy.. Select if you want to play with the first 18 or the last 18 bets:" << endl;
			cout << "Want to bet on Highs or Lows?: ";
			cin >> HL;
			while (HL!="highs" and HL!= "Highs" and HL!="Lows" and HL!="lows"){
				cout << "You have to bet on either Highs or Lows, so either enter the string 'Highs' or the 'Lows' one.";
				cout << "Want to bet on Highs or Lows?: ";
				cin >> HL;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if ((HL == "Highs" or HL == "highs") and ((colorW == "Red" and (numberW == 10 or numberW == 11 or numberW == 12 or numberW == 13 or numberW == 14 or numberW == 15 or numberW == 16 or numberW == 17 or numberW == 18)) or (colorW == "Black" and (numberW == 10 or numberW == 11 or numberW == 12 or numberW == 13 or numberW == 14 or numberW == 15 or numberW == 16 or numberW == 17 or numberW == 18)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.2 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if ((HL == "Lows" or HL == "lows") and ((colorW == "Red" and (numberW == 1 or numberW == 2 or numberW == 3 or numberW == 4 or numberW == 5 or numberW == 6 or numberW == 7 or numberW == 8 or numberW == 9)) or (colorW == "Black" and (numberW == 1 or numberW == 2 or numberW == 3 or numberW == 4 or numberW == 5 or numberW == 6 or numberW == 7 or numberW == 8 or numberW == 9)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.2 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if (bettype == 9){
			string odev;
			cout << "Bet on either odd or even numbers, by entering 'Odd' or 'Even' in the input below." << endl;
			cout << "Odd or Even?: ";
			cin >> odev;
			while (odev!="Odd" and odev!="odd" and odev!="Even" and odev!="even"){
				cout << "The string you have entered is wrong. You should either enter 'Odd' or 'Even'.." << endl;
				cout << "Odd or Even?: ";
				cin >> odev;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if (((odev == "Even" or odev == "even") and numberW % 2 == 0) or ((odev == "Odd" or odev == "odd") and numberW % 2 == 1)){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.2 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else{
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
		else if(bettype == 10){
			int column;
			cout << "Choose one of the three columns of the Roulette Table. Those are: " << endl << endl;
			cout << "1.";
			for (int t=1; t<=6; t++){
				cout << "|R" << 2+3*(t-1) << "|B" << 3+3*(t-1);
			}
			cout << "|" << endl;
			cout << "2.";
			for (int r = 1; r <= 6; r++){
				cout << "|B" << 1+3*(r-1) << "|R" << 3+3*(r-1);
			}
			cout << "|" << endl;
			cout << "3.";
			for (int m=1;m<=6;m++){
				cout << "|R" << 1+3*(m-1) << "|B" << 2+3*(m-1);
			}
			cout << "|" << endl << endl;
			cout << "Column Number: ";
			cin >> column;
			while (column < 1 or column > 3){
				cout << "Your entry was wrong. There are 3 columns in total, so enter a number from 1 to 3.." << endl;
				cout << "Column Number: ";
				cin >> column;
			}
			x = rand() % 2; // picks either Black or Red Color for W. If W is actually a Green 0, color is asigned to Green in the next lines
			if (x==1){
				colorW = "Black";
			}
			else if (x==0){
				colorW = "Red";
			}
			y = rand() % 38;
			if (y==36 or y==37){ // 2 out of 38 slots are Green 0
				colorW = "Green";
				numberW = 0;
			}
			else if (y!=36 and y!=37){
			z = rand() % 18 + 1;
				numberW = z;
			}
			if ((column == 1) and((colorW == "Red" and (numberW == 2 or numberW == 5 or numberW == 8 or numberW == 11 or numberW == 14 or numberW == 17)) or (colorW == "Black" and (numberW==3 or numberW==6 or numberW ==9 or numberW ==12 or numberW ==15 or numberW == 18)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if ((column == 2) and((colorW == "Red" and (numberW == 3 or numberW == 6 or numberW == 9 or numberW == 12 or numberW == 15 or numberW == 18)) or (colorW == "Black" and (numberW==1 or numberW==4 or numberW ==7 or numberW ==10 or numberW ==13 or numberW == 16)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else if ((column == 3) and((colorW == "Black" and (numberW == 2 or numberW == 5 or numberW == 8 or numberW == 11 or numberW == 14 or numberW == 17)) or (colorW == "Black" and (numberW==1 or numberW==4 or numberW ==7 or numberW ==10 or numberW ==13 or numberW == 16)))){
				cout << "Congratulations! You have won! The winning combination was: " << colorW << " " << numberW << endl;
				money = money + 1.25 * bet;
				cout << "Current money: " << money << curr << endl;
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << " " << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
			else {
				cout << "Unfortunately you have lost! The winning combination was: " << colorW << " " << numberW << endl;
				money = money - bet;
				cout << "Current money: " << money << curr << endl;
				if (money == 0){
					cout << "It seems like you haven't got any money left to play. See you another day!" << endl;
					cout << "GOODBYE AND THANKS FOR PLAYING!";
					exit(0);
				}
				cout << "If you want to play again enter Yes, otherwise press Exit to exit the game." << endl;
				cout << "Response: ";
				cin >> rep;
				while (rep!="Yes" and rep!="yes" and rep!="Exit" and rep!="exit"){
					cout << "Your input was wrong. Please enter Yes if you want to play again or Exit to exit the game." << endl;
					cout << "Response: ";
					cin >> rep;
				}
				if (rep == "Yes" or rep == "yes"){
					cout << "" << endl;
					cout << "Please choose your bet." << endl;
				}
				else{
					cout << endl << "Thanks for playing!" << endl;
					cout << "GOODBYE!" << endl;
					exit(0);
				}
			}
		}
	}
}
