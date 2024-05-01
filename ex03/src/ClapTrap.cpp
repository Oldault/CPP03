/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:54:47 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 10:39:29 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KGRN << "ClapTrap " << BOLD_A << "default" << RST;
  std::cout << KGRN << " was born." << RST << "\n";
  
  return ;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KGRN << "ClapTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " was born." << RST << "\n";
  
  return ;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KGRN << "ClapTrap copy constructor was called on " << BOLD_A << src._name << RST << "\n";
  *this = src;

  return ;
}

ClapTrap::~ClapTrap()
{
  std::cout << "[ 🤖 ] ";
  std::cout << KRED << "ClapTrap named " << BOLD_A << _name << RST;
  std::cout << KRED << " was destroyed." << RST << "\n";

  return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KGRN << "ClapTrap copy assignment constructor was called on " << BOLD_A << src._name << RST << "\n";
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }

  return *this;
}
