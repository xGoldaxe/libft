#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(char *str);

int	main(void)
{
	char *t1 = "salut a tous";
	char *t2 = "";
	char *t3 = "s";
	char *t4 = "se;hnmtnkotrnltknornoprtmnnaet,atmarpmraypmarpm,alut a tous";

	printf("%d\n", ft_strlen(t1) == strlen(t1));
	printf("%d\n", ft_strlen(t2) == strlen(t2));
	printf("%d\n", ft_strlen(t3) == strlen(t3));
	printf("%d\n", ft_strlen(t4) == strlen(t4));
}
