/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:10:05 by drina             #+#    #+#             */
/*   Updated: 2020/11/23 13:10:07 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupper(char &sym)
{
	if (sym > 96 && sym < 123)
		sym -= 32;
}

void	changes_letters(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_toupper(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[i] && argc > 1)
	{
		changes_letters(argv[i]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
