#include <iostream>
#include <string>
using namespace std;

string translate (string phrase);

int main() {
	string sentence, newSentence;
	cout << "Enter a sentence to be translated into Pig Latin (no punctuation): ";
	getline(cin,sentence);
	sentence.insert(sentence.length()," ");
	newSentence = translate(sentence);
	cout << "Your sentence in Pig Latin: " << newSentence;

	return 0;
}

string translate (string phrase)
{
	int a = 0;
	string x;
	string letters = "ay";
	for(int i = 0; i < phrase.length(); i++)
	{
		x = phrase.substr(i,1);
		phrase.erase(i,1);
		a = phrase.find(" ",i);
		phrase.insert(a,x);
		phrase.insert(a+1,letters);
		i = a + letters.length() + 1;
	}
	return phrase;
}
