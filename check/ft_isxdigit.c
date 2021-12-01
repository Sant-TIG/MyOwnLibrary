/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:14:21 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 17:18:20 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_isxdigit ---> is a hexadecimal digit character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isxdigit(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isxdigit() mimics the behavior of the isxdigit() function from
  ctype C library. Both functions check if c is a hexadecimal digit character
  (0-9, a-f, A-F) or not.

  RETURN VALUE
  ************
  - Non-zero value if c is a hexadecimal digit character.
  - Zero value if not.
  
*/

int ft_isxdigit(int c)
{
    return(ft_isdigit(c) || ft_isxchar(c));
}
