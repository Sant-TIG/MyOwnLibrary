/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:38 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 15:52:34 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_isalnum --> is an alphanumeric character

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isalnum(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isalnum() mimics the behavior of the isalnum() function from
  ctype C library. Both functions check if c is an alphanumeric character.

  RETURN VALUE
  ************
  - Non-zero value if c is a letter or a digit.
  - Zero value if not.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
