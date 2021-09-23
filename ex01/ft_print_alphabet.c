#include <unistd.h>

void ft_print_alphabet() {
    for (char i = 97; i < (97 + 26); i++) {
        write(1, &i, 1);
    }
    char newLine = '\n';
    write(1, &newLine, 1);
}
