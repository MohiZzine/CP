#include <bits/stdc++.h>

using namespace std;

class Progression {
	public:
		Progression(long f = 0);
		virtual ~Progression();
		void printProgression(int n);
	protected:
		virtual long firstValue();
		virtual long nextValue();
	protected:
		long first;
		long cur;
};

Progression::Progression(long f) {
	first = f;
	cur = f;
}
/*
The functions firstValue() and nextValue() are both declared to be virtual so that,
in each subclass, one or both of these will get overrided!
*/
long Progression::firstValue() { // reset
	cur = first;
	return cur;
}

long Progression::nextValue() { // advance
	return ++cur;
}

void Progression::printProgression(int n) {
	cout << firstValue();
	for (int i = 1; i < n; i++) {
		cout << ' ' << nextValue();
	}
	cout << endl;	
}

class ArithProgression: public Progression {
	public:
		ArithProgression(long i = 1);
	protected:
		virtual long nextValue();
	protected: 
		long inc;
};

ArithProgression::ArithProgression(long i): Progression(), inc(i) {}

long ArithProgression::nextValue() {
	cur += inc;
	return cur;
}

class GeomProgression: public Progression {
	public:
		GeomProgression(long b = 2);
	protected:
		virtual long nextValue();
	protected:
		long base;
};

GeomProgression::GeomProgression(long b): Progression(1), base(b) {}

long GeomProgression::nextValue() {
	cur *= base;
	return cur;
}
 
int main() {
	cout << "Hello"; 
	return 0;
}