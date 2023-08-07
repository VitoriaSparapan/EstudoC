#include <stdio.h>
#include <unistd.h>

int main() {
    char letter;

    letter = 'a';
    while (letter <= 'z') {
        write(1, &letter, 1);
        letter++;
    }
}

