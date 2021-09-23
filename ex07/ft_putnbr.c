#include <unistd.h>
#include <math.h>

void ft_putnbr(int nb) {
    int result = nb,
        numberOfDigits = 0;

    while( (int)(result = result / 10) > 0)
        numberOfDigits++;

    char ch;
    int oldval = 0;
    for (int i = numberOfDigits; i >= 0; i--) {
        ch = (nb / (int)pow(10, i) - oldval * 10) + '0';
        oldval = nb / (int)pow(10, i);

        write(1, &ch, 1);
    }
}
