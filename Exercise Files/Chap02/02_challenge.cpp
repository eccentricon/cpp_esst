// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main() {
    int count = 0;
    for(; string[count]; count++);  // bodiless for loop
    printf("(for)\tThe number of characters is: %d\n", count);

    count = 0;
    while(string[count]) ++count;
    printf("(while)\tThe number of characters is: %d\n", count);

    count = 0;
    for (char c : string) {
        if (c) count++;
    }
    printf("(range)\tThe number of characters is: %d\n", count);

    return 0;
}
