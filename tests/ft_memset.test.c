#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	void	*mem;
	int	n;
	int	value;
	int	i;

	n = 50;
	value = 9;
	mem = malloc(sizeof(int) * n);
	ft_memset(mem, value, n);
	i = 0;
	while (i < n)
	{
		if (!(*((int *)mem + i) == value)) {
			printf("test failed");
			return (0);
		}
		i++;
	}
	printf("test successful");
}
