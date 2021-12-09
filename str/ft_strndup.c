/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:42:53 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/09 22:16:18 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_strndup --> duplicate of str of limited length

  SYNOPSIS
  ********
  #include "libft.h"
  char	*ft_strndup(const char *str, size_t size);

  PARAMETERS
  **********
  str --> the string on which the new string is based.
  len --> the maximum size of the new string.

  DESCRIPTION
  ***********
  The function ft_strndup() mimics the behaviour of the strndup() function from
  string C library. Both functions create a duplicate of the string pointed to by
  str with a maximum size of 'size' bytes. The dinamic space memory for the new
  string is obtained with the function malloc().

  RETURN VALUE
  ************
  - A pointer to a new string which is a duplicate of size bytes of the string str.
  - NULL if insufficient memory was available to the new string.
*/

#include "../libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_strcpy(new_str, str, len);
	return (new_str);
}
