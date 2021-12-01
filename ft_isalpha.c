/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:07 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 15:59:47 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */
/*
  NAME
  ****
  ft_isalpha ---> is an alphabetic character

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isalpha(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isalpha() mimics the behavior of the isalpha() function from
  ctype C library. Both functions check if c is an alphabetic character.


  RETURN VALUE
  ************
  - Non-zero value if c is a letter.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
*/

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
