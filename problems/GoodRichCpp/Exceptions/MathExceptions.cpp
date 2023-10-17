#include <bits/stdc++.h>

using namespace std;

class MathException {
	public:
		MathException(const string& err): errMsg(err) {}
		string getError() { return errMsg; }
	private:
		string errMsg;
};

class ZeroDivide: public MathException {
	public:
		ZeroDivide(const string& err): MathException(err) {}
};

class NegativeRoot: public MathException {
	public:
		NegativeRoot(const string& err): MathException(err) {}
};

void calculator() throw(ZeroDivide, NegativeRoot) {
	// function body ...
}

void getReadyForClass() throw(ShoppingListTooSmallException, OutOfMoneyException) {
	
	goShopping(); 
	/*
	I don't have to try or catch the exceptions, which goShopping() might throw 
	because getReadyForClass will just pass these along.
	*/
	
	makeCookiesForTA();
}

int main() {
	int divisor = 0;
	try {
		if (divisor == 0) // attempt to divide by zero ?
			throw ZeroDivide("Divide by zero in Module X");
	} catch (ZeroDivide& zde) {
		cout << zde.getError() << endl;
		divisor = 10;
		cout << divisor ;
	} catch (MathException& me) {
		// Handle any math exception other than division by 0
	}	
	return 0;
}