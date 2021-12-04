/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:56:03 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:16:17 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_iscntrl ---> is an ascii control character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_iscntrl(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_iscntrl() mimics the behavior of the iscntrl() function from
  ctype C library. Both functions check if c is an ascii control character or
  not.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii control character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int ft_iscntrl(int c)
{
    return ((c >= 0 && c <= 31) || c == 127);
}
