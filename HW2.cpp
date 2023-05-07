#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

int main()
{

	ifstream file("hw2_data.txt");
	unordered_map<string, int> wordCount; // create hash table
	string word;
	int uniqueWords = 0;

	// file I/O
	while (file >> word)
	{
		if (wordCount.find(word) == wordCount.end())
		{
			uniqueWords++;
		}
		wordCount[word]++;
	}

	cout << "There are " << uniqueWords << " unique words.\n";
	cout << "Word count:\n";
	for (auto& p : wordCount)
	{
		cout << p.first << ": " << p.second << "\n";
	}

	return 0;
}
