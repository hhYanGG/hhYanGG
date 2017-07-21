// Hangman.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
int main()
{
	const int MAX_WRONG = 8;
	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFCULT");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";
	cout << "welcome to Hangman Good Luck\n";
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << "\n \n you have" << (MAX_WRONG - wrong);
		cout << "incorrect guesses left .\n";
		cout << "\n you have'used the following letters:\n" << used << endl;
		cout << "\n soFar the word is\n" << soFar << endl;
		char guess;
		cout << "\n\n enter your guess: ";
		cin >> guess;
		guess = toupper(guess);
		while (used.find(guess) != string::npos)
		{
			cout << "\n you've already guessed" << guess << endl;
			cout << "enter your guess: ";
			cin >> guess;
			guess = toupper(guess);
		}
		used += guess;
		if(THE_WORD.find(guess) != string::npos)
		{
			cout << "that's right " << guess << "is in the word\n";
			//update soFar to include newly guessed letter
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "sorry" << guess << "isn't in the word.\n";
			++wrong;
		}

	}
	//shut down
	if (wrong == MAX_WRONG)
	{
		cout << "\n You've been hanged!";
	}
	else 
	{
		cout << "\n You guess it!";
	}
	cout << "\n The word was" << THE_WORD << endl;
    return 0;
}

