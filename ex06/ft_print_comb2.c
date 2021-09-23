#include <unistd.h>

void ft_print_comb() {
    int stop = 0;
    int max = '9' + '8' + '9' + '9';

    for (char c = '0'; c <= '9' && !stop; c++) {
        for (char d = '0'; d <= '9' && !stop; d++) {
            for (char e = c; e <= '9' && !stop; e++) {
                for (char f = d + 1; f <= '9' && !stop; f++) {
                    stop = (c + d + e + f) >= max;
                    write(1, &c, 1);
                    write(1, &d, 1);
                    write(1, " ", 1);
                    write(1, &e, 1);
                    write(1, &f, 1);
                    if (!stop) {
                        write(1, ", ", 2);
                    }
                }
            }
        }
    }
}
