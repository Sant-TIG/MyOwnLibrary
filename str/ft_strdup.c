/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:14:24 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/09 20:34:45 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_strdup --> duplicate a string

  SYNOPSIS
  ********
  #include "libft.h"
  char	*ft_strdup(const char *str);

  PARAMETERS
  **********
  str --> the pointed string to duplicate.

  DESCRIPTION
  ***********
  The function ft_strdup() mimics the behaviour of the strdup() function from
  string C library. Both functions create a duplicate of the string pointed to by
  str. The dinamic space memory for the new string is obtained with the function
  malloc().

  RETURN VALUE
  ************
  - A pointer to a new string which is a duplicate of the string s.
  - NULL if insufficient memory was available to the new string.

*/

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	str_len;

	str_len = ft_get_char_pos(str, '\0');
	new_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, str, str_len);
	return (new_str);
}
