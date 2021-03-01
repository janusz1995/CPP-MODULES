/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:15:02 by drina             #+#    #+#             */
/*   Updated: 2020/11/27 13:15:04 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *pony;
	pony = new class Pony();
	pony->pony_run();
	pony->pony_eat();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony pony; // cons
	pony.pony_run();
	pony.pony_eat();
} // decons

int		main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}