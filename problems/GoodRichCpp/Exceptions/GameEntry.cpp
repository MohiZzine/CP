#include <bits/stdc++.h>

using namespace std;

public class GameEntry {
	public:
		GameEntry(const& string n="", int s=0);
		string getName();
		int getScore() const;
		
	private:
		string name;
		int score;
};

GameEntry::GameEntry(const string&, int s=0): name(n), score(s) {
}

string GameEntry::getName() const {
	return name;
}

int GameEntry:getScore() const {
	return score;
}

public class Scores {      						// Store game high scores
	public:	
		Scores(int maxEnt = 10);				// constructor
		~Scores();								// destructor
		void add(const GameEntry& e);			// add a game entry
		GameEntry remove(int i) throw(IndexOutOfBounds);				// remove a game entry	
	private:
		int maxEntries;							// maximum number of entries
		int numEntries;							// actual number of entries
		GameEntry* entries;						// array of game entries
};

Scores::Scores(int maxEnt = 10) {
	maxEntries = maxEnt;
	entries = new GameEntry[maxEntries];
	numEntries = 0;
}

Scores::add(const GameEntry& e) {
	int newScore = e.getScore();
	if (numEntries == maxEntries) {
		if (newScore <= entries[maxEntries - 1].getScore())
		return;
	} else 
		numEntries++;
		
	int i = numEntries - 2;
	while (i >= 0 && newScore > entries[i].getScore()) {
		entries[i + 1] = entries[i];
		i--;
	}	
	entries[i + 1] = e;
}
 
Scores::remove(int i) throw(IndexOutOfBounds) {
	if ((i < 0) && (i > numEntries))
		throw(IndexOutOfBounds);
	GameEntry e = entries[i];
	for (int j = i + 1; j < numEntries; j++) {
		entries[j - 1] = entries[j];
	}
	numEntries--;
	return e;
} 
 
Scores::~Scores() {
	delete[] entries;
}



int main () {
	
	return 0;
}