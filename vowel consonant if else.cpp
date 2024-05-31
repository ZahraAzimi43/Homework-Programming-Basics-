#include <iostream>

using namespace std;

int main () {
	char eng;
	cout<< "Please enter a letter : ";
	cin >> eng;
	
	if (eng == 'A'|| eng=='a'|| eng== 'E'|| eng== 'e'|| eng== 'i'|| eng== 'I'|| eng=='o' || eng=='O'||eng=='U'||eng=='u') {
		cout<< "is a Vowel.";
	}
	else {
		cout<< "is a consonsnt.";
	}
	return 0;
}
