/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:15:50 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/01 23:31:53 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    int         _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;

    std::string _printLen(std::string str) const;
    std::string _getInput(std::string str) const;

public:
    Contact();
    ~Contact();
    void    init(void);
    void    view(int index) const;
    void    display(int index) const;
    void    setIndex(int i);
};

#endif