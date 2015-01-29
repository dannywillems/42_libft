#include "libft.h"

/* Same as strcat but realloc memory to be sure that s1 have enough space.
 * Return pointer to the first character. */
char	*ft_strcat_realloc(char *s1, const char *s2)
{
	char *new;

	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	new = ft_strcat(new, s1);
	new = ft_strcat(new, s2);
	//ft_strdel(&s1);
	return (new);
}
