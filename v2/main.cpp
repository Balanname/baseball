#include <iostream>

using namespace std;

int answerSet();
int strikenumber(int answer, int guess);
int ballsnumber(int answer, int guess);

int main() {

	int answer;
	int guess;

	cout << "Answer is ";
	answer = answerSet();
	cout << answer << endl;

	cout << "Enter a guess: ";
	cin >> guess;

	while (true) {


		int strikes = strikenumber(answer, guess);
		int balls = ballsnumber(answer, guess);


		if (strikes == 3) {

			cout << "You win";
			break;
		}
		else {

			cout << "Strikes: " << strikes << "," << "Balls: " << balls << endl;
			cout << "Enter a guess:";
			cin >> guess;
		}

	}

}