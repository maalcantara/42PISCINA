#include "header.h"

int ft_is_numeric(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
           // printf("deu erorrrmimrimir");
            return (1);
        }
        i++;  
    }
    //printf("deu baummm");
    return (0);
}

int	ft_is_dict(char *str)
{
    char to_find[6] = {".dict"};
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j]
            && str[i + j] != '\0' && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
            //printf("deu bom");
			return (1);
		}
		j = 0;
		i++;
	}
    //printf("deu errorhhhhhhhhhhhh");
	return (0);
}

int error(int argc, char *str, char *str2)
{
   if(argc == 2)
   {
    ft_is_numeric(str);
   }
   else if (argc == 3)
   {
    ft_is_dict(str);
    ft_is_numeric(str2);
   }
   else
   {
    printf("deu errorrrrrr");
    return (0);
   }
   return (1);
}

