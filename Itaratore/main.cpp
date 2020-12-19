#include <vector>
#include <list>
#include "Itaratore.cpp"

using namespace std;

int main() {

	vector<double> a{ 1, 2, 3, 4, 5 };
	list<double> b{ 6, 7, 8, 9, 10 };
	Vector_iterator v(a);
	List_iterator l(b);
	for (int i = 0; i < a.size(); i++) 
		cout << *v.next() << " ";
	cout << endl;
	for (int i = 0; i < b.size(); i++)
		cout << *l.next() << " ";
	cout << endl;

	

}