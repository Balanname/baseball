#include <iostream>

using namespace std;

int answerSet();
int strikenumber(int answer, int guess);
int ballsnumber(int answer, int guess);

int main() {

	int answer;
	int guess;

	answer = answerSet();

	int a = 5;

	cout << "5 chances left." << endl;
	cout << "Entet a guess: ";
	cin >> guess;

	while (true) {

		int strikes = strikenumber(answer, guess);
		int balls = ballsnumber(answer, guess);

		if (strikes == 3) {

			cout << "You win";
			break;
		}
		else if (a <= 1) {
			cout << "Strikes: " << strikes << "," << "Balls: " << balls << endl;
			cout << "You lose!";
			break;
		}
		else {

			cout << "Strikes: " << strikes << "," << "Balls: " << balls << endl;
			a -= 1;
			cout << a;
			cout << " chances left" << endl;
			cout << "Enter a guess: ";
			cin >> guess;
		}

	}

}