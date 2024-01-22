/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:26:02 by charles           #+#    #+#             */
/*   Updated: 2024/01/22 20:13:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : Form( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : Form( src ), _target( src._target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
    (void)rhs;
    return *this;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if ( this->getSigned() == false )
        throw Form::NotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute() ) {
        throw Form::GradeTooLowException();
    }
    std::ofstream file((this->getName() + "_shrubbery").c_str());
    if (file.is_open())
    {
        file << "                      ___" << std::endl;
        file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
        file << "             ,-'          __,,-- \\" << std::endl;
        file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
        file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
        file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
        file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
        file << "     (     ,-'                  `." << std::endl;
        file << "      `._,'     _   _             ;" << std::endl;
        file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
        file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
        file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
        file << "                \"Hb HH dF" << std::endl;
        file << "                 \"HbHHdF" << std::endl;
        file << "                  |HHHF" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  |HHH|" << std::endl;
        file << "                  dHHHb" << std::endl;
        file << "                .dFd|bHb.               o" << std::endl;
        file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
        file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
        file << "##########################################" << std::endl;
        file.close();
    }
    else
        std::cout << "Erreur : Impossible d'ouvrir le fichier." << std::endl;
}