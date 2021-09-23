#include <unistd.h>
#include <stdio.h>

void ft_print_comb() {
    int showComma = 0;

    for (char c = '0'; c <= '9'; c++) {
        for (char d = c + 1; d <= '9'; d++) {
            for (char e = d + 1; e <= '9'; e++) {
                if (showComma) {
                    write(1, ", ", 2);
                }
                write(1, &c, 1);
                write(1, &d, 1);
                write(1, &e, 1);
                showComma = 1;
            }
        }
    }
}
