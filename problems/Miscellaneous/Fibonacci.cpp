#include <bits/stdc++.h>

using namespace std;

class Progression {
	public:
		Progression(long f = 0);
//		virtual ~Progression();
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

class FibonacciProgression: public Progression {
	public:
		FibonacciProgression(long f = 0, long s = 1);
	protected:
		virtual long firstValue();
		virtual long nextValue();
	protected: 
		long second;
		long prev;
};

FibonacciProgression::FibonacciProgression(long f, long s): Progression(f), second(s), prev(s - f) {}

long FibonacciProgression::firstValue() { // reset
	cur = first;
	prev = second - first;
	return cur;
}

long FibonacciProgression::nextValue() {
	long temp = cur;
	cur += prev;
	prev = temp;
	return cur;
}

int main() {
	FibonacciProgression* p = new FibonacciProgression();
	p->printProgression(10);
	return 0;
}