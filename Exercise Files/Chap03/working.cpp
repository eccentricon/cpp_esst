// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

void adder(int& number) {
    number++;
}

int main() {
    int i = 5;
    puts("Calling adder()...");
    adder(i);
    printf("i is now %d\n", i);
    return 0;
}
