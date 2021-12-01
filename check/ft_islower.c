/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:02:51 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:35:22 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_islower ---> is a lowercase alphabetic character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_islower(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_islower() mimics the behavior of the islower() function from
  ctype C library. Both functions check if c is a lowercase alphabetic
  character.

  RETURN VALUE
  ************
  - Non-zero value if c is a lowercase alphabetic character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
*/

int ft_islower(int c)
{
  return (c >= 97 && c <= 122);
}
