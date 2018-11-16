#include <stdio.h>

int     ft_lenght_int(int nb)
{
    int lenght = 0;

    while (nb)
    {
        nb = nb / 10;
        lenght++;
    }
    return (lenght);
}
char    *ft_itoa(int nb)
{
    int lenght = ft_lenght_int(nb);
    printf("%i\n", lenght);
}

int     main(void)
{
    char *toto = NULL;
    
    toto = ft_itoa(875);
    return 0;
}
