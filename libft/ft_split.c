/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:50 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/30 15:24:40 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void *free_hem(char **s, size_t i)
{
	while(i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
	return (NULL);
}
static size_t	word_count(char const *str, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (word);
}

static size_t	count_letters(char const *s, char c, size_t i)
{
	size_t	size;

	size = i;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i - size);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * ((word_count(s, c)) + 1));
	if (!split)
	{
		free(split);
		return (NULL);
	}
	while (j < word_count(s, c))
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, count_letters(s, c, i));
		if(!split[j])
			return(free_hem(split, j));
		j++;
		i = i + count_letters(s, c, i);
	}
	split[j] = NULL;
	return (split);
}
	int main(int argc, char *argv[]) {
	int	i;
	i = 0;
    if (argc != 3) {
        printf("Usage: %s <string> <delimiter>\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    char delimiter = argv[2][0]; // Assuming the delimiter is a single character

    // Call the ft_split function
    char **result = ft_split(input, delimiter);

    // Print the result
    if (result)
	{
        printf("Result:\n");
        for (i = 0; result[i] != NULL; ++i) {
            printf("%s\n", result[i]);
        }

        // Free the memory allocated by ft_split
        free_hem(result, i - 1);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
