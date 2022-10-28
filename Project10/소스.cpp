#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

class inlab {
public:
		inlab() {};
		inlab(string name) : m_name(name) {};
		string getName() { return m_name; };
public:
			string m_name;
			};

			int main() {
				vector<inlab> yourVector(1);

				yourVector.push_back(inlab("Ryu:"));
				yourVector.push_back(inlab("Kim"));
				cout << yourVector.size() << endl;
				cout << yourVector[1].getName() << endl;
				cout << yourVector[2].getName() << endl;
				//yourVector [5] = inlab("Kim");

				vector<inlab*>myVector(2);
				inlab* a = new inlab("dongguk");
				myVector.push_back(a);
				a = new inlab("inlab");
				myVector.push_back(a);

				return EXIT_SUCCESS;
}