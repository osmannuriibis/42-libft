#include<unistd.h>
#include<string.h>

size_t  ft_strlen(char *str)
{
    char *s;

    s = str;

    while (*(s++) != 0);

    return (s - str);  
}
char				*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int				size;
	int				i;

	if (!*need)
		return ((char*)hay);
	size = ft_strlen((char *)need);
	while (*hay && len)
	{
		i = 0;
		while (*hay && hay[i] == need[i] && len - i)
		{
			if (i + 1 == size)
				return ((char*)hay);
			i++;
		}
		hay++;
		len--;
	}
	return (0);
}
int main()
{
    write(1,"osman",5);
    char *p ;
    p = ft_strnstr ("osman", "osman" , 4);

    write(1,p, strlen(p) );
    write(1,"ososo",4);


}
