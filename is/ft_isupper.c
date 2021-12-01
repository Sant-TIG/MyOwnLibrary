/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:12:18 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 17:16:31 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isupper ---> is an uppercase alphabetic character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isupper(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isupper() mimics the behavior of the isupper() function from
  ctype C library. Both functions check if c is an uppercase alphabetic
  character.

  RETURN VALUE
  ************
  - Non-zero value if c is an uppercase alphabetic character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int ft_isupper(int c)
{
  return (c >= 65 && c <= 90);
}
