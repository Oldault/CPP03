/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:46:30 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:06:27 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
  std::cout << "[ ⚙️  ] ";
  std::cout << KGRN << "ScavTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " was born." << RST << "\n";
  
  setStats(100, 50, 20);

  return ;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
  std::cout << "[ ⚙️  ] ";
  std::cout << KGRN << "ScavTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " was born." << RST << "\n";
  
  setStats(100, 50, 20);

  return ;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
  std::cout << "[ ⚙️  ] ";
  std::cout << KGRN << "ScavTrap copy constructor was called on " << BOLD_A << src._name << RST << "\n";
  *this = src;

  return ;
}

ScavTrap::~ScavTrap()
{
  std::cout << "[ ⚙️  ] ";
  std::cout << KRED << "ScavTrap named " << BOLD_A << _name << RST;
  std::cout << KRED << " was destroyed." << RST << "\n";

  return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
  std::cout << "[ ⚙️  ] ";
  std::cout << KGRN << "ScavTrap copy assignment constructor was called on " << BOLD_A << src._name << RST << "\n";
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }

  return *this;
}

