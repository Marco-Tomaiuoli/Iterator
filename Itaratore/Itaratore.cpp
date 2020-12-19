#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Iterator {
public:
	virtual double* next() = 0;
};

class Vector_iterator : public Iterator {
private:
	vector<double> v;
	int cont = 0;
public:
	Vector_iterator(const vector <double> & input) : v{input}, cont{0} {}
	double* next() override {
		if (cont < v.size())
			return &v[cont++];
		return 0;
	}
};

class List_iterator : public Iterator {
private:
	list<double> l;
	list<double>::iterator cont;
public:
	List_iterator(const list<double> &input) : l{input}, cont{l.begin()} {}
	double* next() override {
		if (cont != l.end())
			return &*cont++;
		return 0;
	}
};

