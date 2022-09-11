#include <iostream>
using namespace std;

int main() {
#ifdef HELLO
    cout << "hello" << endl;
#else
    cout << "main" << endl;
#endif
    return 0;
}
