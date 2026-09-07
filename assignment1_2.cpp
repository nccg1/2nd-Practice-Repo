#include <iostream>
using namespace std;

class Noah {
public:
    Noah() {
        cout << "Noah created" << endl;
    }

    void run() {
        cout << "Noah is running" << endl;
    }

    ~Noah() {
        cout << "Noah destroyed" << endl;
    }
};

int main() {
    Noah n;
    n.run();
    return 0;
}
