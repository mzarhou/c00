#include <unistd.h>

void ft_print_alphabet() {
    for (char i = 'z'; i >= 'a'; i--) {
        write(1, &i, 1);
    }
    char newLine = '\n';
    write(1, &newLine, 1);
}
