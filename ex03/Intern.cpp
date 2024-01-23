/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:09:11 by charles           #+#    #+#             */
/*   Updated: 2024/01/23 12:51:27 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){
}

Intern::Intern (const Intern& src) {
    *this = src;
}

Intern& Intern::operator=(const Intern& rhs) {
    (void) rhs;
    return *this;
}

Intern::~Intern(){
    
}

Form *  Intern::makeForm(std::string name, std::string target) {
    
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    Form* forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    Form* createdForm = NULL;

    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            createdForm = forms[i];
        } 
        else
            delete forms[i];
    }

    if (createdForm == NULL) {
        std::cout << "Intern cannot create " << name << " form" << std::endl;
    }

    return createdForm;
}