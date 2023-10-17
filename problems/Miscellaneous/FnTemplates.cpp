#include <iostream>

using namespace std;

template <typename T>
T genericMin(T a, T b) {
	return (a < b ? a: b);
}

template <typename T>
class BasicVector {
	public:
		BasicVector(int capac = 10);
		T& operator[](int i) {
			return a[i];
		}
		// Other public members ommited
	private:
		T* a;
		int capacity;
};

template <typename T> // constructor
BasicVector<T>::BasicVector(int capac) {
	capacity = capac;
	a = new T[capacity]; // allocate array storage
};

int main() {
	BasicVector<int> iv(5);
	BasicVector<char> dv(20);
	BasicVector<BasicVector<int> > bv(5);
	
	iv[0] = 8;
	cout << "iv[3] = " << iv[3] << endl;
//	cout << genericMin<int>(3, 4) << ' ' << genericMin<float>(1.1, 3.1) << ' ' << genericMin<char>('t', 'g') << endl;
	return 0;
}