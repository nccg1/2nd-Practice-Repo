#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Integer sum: " << add(5, 3) << endl;
    cout << "Double sum: " << add(2.5, 4.5) << endl;
    return 0;
}
