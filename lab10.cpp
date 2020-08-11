#include <iostream>

using namespace std;
a[50];
struct book{
	char books[20];
	char author[20];	
}



int main(){

	int n, i;
	cout << "No Of Books[less than 50]: ";
	cin >> n;
	cout << "Enter the book details" << endl;
	cout << "----------------------" << endl;

	for (i = 0; i < n; i++){
		cout << "Details of Book No " << i + 1 << endl;
		cout << "Book Name : ";
		cin >> a[i].books;
		cout << "Book Author : ";
		cin >> a[i].author;
	}
	cout << "=========================================" << endl;
	cout << " S.No | Book Name |author" << endl;
	cout << "=========================================" << endl;

	for (i = 0; i < n; i++){
		cout << "   "<< i + 1 << " |" << a[i].books << " | " << a[i].author << endl;
	}
	cout << "=========================================" << endl;

	return 0;
}