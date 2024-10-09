#include <iostream>
#include <string>

using namespace std;

int main(){
	string one, two, three, four, five, six;
	while( getline(cin, one)){
		getline(cin, two);
		getline(cin, three);
		getline(cin, four);
		getline(cin, five);
		getline(cin, six);
		two = two + three;
		five = five + six;
		cout << one << endl << two << endl << four << endl << five << endl;
	}
}
