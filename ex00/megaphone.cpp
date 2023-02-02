/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:08:16 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/01 23:08:34 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1)
    {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
	else
    {
		for (int i = 1; av[i]; i++)
        {
			for (int j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}