#include "header.h"

int size_file(char *name_file)
{
    int file;
    char content;
    int count_digits;

    content = 0;
    count_digits = 0;
    file =  open(name_file, O_RDONLY);
    while (read(file, &content, 1) > 0) {
        count_digits++;
    }
    close(file);
    return (count_digits);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_strstr(char *str, char *to_find, struct s_dict s_dictionario)
{
	int	idx;
	int	idx2;
    char *keytemp;
    char *valuetemp;

	idx = 0;
	idx2 = 0;
	while (str[idx] != '\0')
	{
		while (str[idx] != to_find[idx2]
            && str[idx] != '\n' && str[idx] != '\0')
		{
            if (str[idx] != ' ')
            {
                ft_strcpy(s_dictionario.key, &str[idx]);
                
            }
            idx++;
		}

        while (str[idx] != '\n' && str[idx] != '\0')
        {
            if (str[idx] != ' ')
            {
                ft_strcpy(s_dictionario.value, &str[idx]);
                
            }
            idx++;
        }
		idx++;
	}
	return ;
}


void    ft_convert(char *name_file, struct s_dict s_dictionario)
{
    int file;
    char *dict;
    int count_digits;
    char cpdict;
    int	idx;
    
    file = open(name_file, O_RDONLY);
    count_digits = size_file(name_file);
    dict = (char *) malloc(1 * count_digits);
    
    read(file, dict, count_digits);
    close(file);

    ft_strstr(dict, ":" , s_dictionario);

}