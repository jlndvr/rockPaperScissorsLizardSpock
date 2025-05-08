#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// 5 
// scissors > paper
// scissors > liz

// paper > rock
// paper > spock

// liz > spock
// liz > paper

// spock > scissors
// spock > rock

// rock > liz
// rock > scissors
int main() {
  srand(time(0));
  int uwins = 0;
  int cwins = 0;

  cout << "Welcome to my Rock, Paper, Scissors, Lizard, or Spock game!\n";

  do {
    
  int computer = rand() % 5 + 1;
  int user = 0;

  cout << "Pick: \n";
  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";
  cout << "Choice: ";

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;
  
  cin >> user;

  cout << "Computer: " << computer << "\n";

  // Game logic
  if (user == rock && computer == scissors || user == rock && computer == lizard) { cout << "User has won!\n"; ++uwins; }
  else if (user == spock && computer == scissors || user == spock && computer == rock) { cout << "User has won!\n"; ++uwins; }
  else if (user == lizard && computer == spock || user == lizard && computer == paper) { cout << "User has won\n"; ++uwins; }
  else if (user == paper && computer == rock || user == paper && computer == spock) { cout << "User has won!\n"; ++uwins; }
  else if (user == scissors && computer == paper || user == scissors && scissors == lizard) { cout << "User has won!\n"; ++uwins; }
  else if (user == computer) cout << "Draw!\n";
  else { cout << "Computer has won!\n"; ++cwins; }
  } while(uwins < 2 && cwins < 2);

  // Winner 
  if (uwins == 2) cout << "User has won the game!\n";
  else if (cwins == 2) cout << "Computer has won the game!\n";

  return 0;
}
