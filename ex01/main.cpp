/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:15:49 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/02 14:27:28 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void) {
    PhoneBook book;
    std::string input = "";
    book.welcomeMessage();
    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0) {
            book.printContacts();
            book.search();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
    return 0;
}