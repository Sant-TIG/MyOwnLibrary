/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:13:48 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 17:22:21 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isxchar ---> is a hexadecimal character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isxchar(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isxchar() checks if c is a hexadecimal character (a-f, A-F) or not.

  RETURN VALUE
  ************
  - Non-zero value if c is a hexadecimal character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int  ft_isxchar(int c)
{
    return ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}
