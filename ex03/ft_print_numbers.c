#include <unistd.h>

void ft_print_numbers() {
    for (char c = 49; c < 58; c++) {
        write(1, &c, 1);
    }
}
