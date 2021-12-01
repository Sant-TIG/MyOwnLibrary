/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:19 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:23:49 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isdigit --> is a digit character

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isdigit(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isdigit() mimics the behavior of the isdigit() function from
  ctype C library. Both functions check whether c is digit (0 through 9) or not.

  RETURN VALUE
  ************
  - Non-zero value if c is a digit.
  - Zero value if not.
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.

*/

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
