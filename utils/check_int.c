#include "../push_swap.h"

bool	check_int(const char *s)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == 32 || (s[i] <= 13 && s[i] >= 9))
		i++;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if(s[i] > '9' || s[i] < '0')
            return (false);
        i++;
	}
	return (true);
}