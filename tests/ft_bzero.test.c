#include <stdio.h>
#include <stdlib.h>

//void	ft_bzero(void *s, size_t n);

#include <stdio.h>
    
void showbits( void *x )
{
    int i = 0;
    while (i < 5)
    {
       putchar(*x << i ? '1' : '0');
    }
    printf("\n");
}


int	main(void)
{
	int	nbr;
	int	bit;
	int	n;
	int	i;
	void	*x;

	x = malloc(10);
	showbits(x);

	nbr = 992;
	n = 5;
	i = 0;
	while (i < n)
	{
		bit = (nbr >> i) & 1U;
		if (bit != 0)
		{
			printf("test failed");
			return (0);
		}
		i++;
	}
	printf("test successful");
}
