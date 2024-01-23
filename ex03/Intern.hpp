/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:08:22 by charles           #+#    #+#             */
/*   Updated: 2024/01/23 12:13:31 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {

public:
    Intern();
    Intern(const Intern& src);
    ~Intern();

    Intern& operator=(const Intern& rhs);

    Form*   makeForm(std::string name, std::string target);
};

#endif