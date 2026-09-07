 #include <string>
#include <iostream>
using namespace std;
class Book {
public:
	string title;
	int pages;

	bool isLong() {
		return pages > 300;
	}
};