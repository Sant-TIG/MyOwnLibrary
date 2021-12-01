/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:50:34 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:05:23 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isblank ---> is an blank character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isblank(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isblank() mimics the behavior of the isblank() function from
  ctype C library. Both functions check if c is a blank character. That is, the
  space (' ') and the tab ('\t') characters.

  RETURN VALUE
  ************
  - Non-zero value if c is a space or a tab.
  - Zero value if not.

  NOTES
  *****
  isblank() conforms to POSIX.1-2001 and C99 7.4.1.3.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int ft_isblank(int c)
{
  return (c == 9 || c == 32);
}
