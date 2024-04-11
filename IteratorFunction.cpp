#include <iostream>

class Iterator {
    int state;

  public:
    Iterator() : state(0) {}
    int next() {
        return state++;
    }
};

int main() {
    Iterator gen;

    std::cout << gen.next() << std::endl;
    std::cout << gen.next() << std::endl;

    return 0;
}
