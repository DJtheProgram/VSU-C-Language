/*Dongwoon Jeong
2019/07/18
lab09
CS3335
*/

#include <iostream>
using namespace std;

int main(){
	 char ch[10];
 	 char sCh;
	 int count = 0;
	 cout << "Enter a string(at most 10 characters): " ;
	 cin >> ch;
    cout << endl;
	 cout << "The string entered: " << ch << endl;
	 cout << "Enter a character: ";
	 cin >> sCh;
	 for (int i = 0; i < 10; i++){
		if (ch[i] == sCh){
			++count;
		 }
	   }
	cout << "Chracter '" << sCh << "' occurs in '" << ch << "' " << count << " times" << endl;
	return 0;
   }