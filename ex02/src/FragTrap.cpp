/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:13:30 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:36:39 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
  std::cout << "[ 👾 ] ";
  std::cout << KGRN << "FragTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " just showed up." << RST << "\n";
  
  setStats(100, 100, 30);

  return ;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
  std::cout << "[ 👾 ] ";
  std::cout << KGRN << "FragTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " just showed up." << RST << "\n";
  
  setStats(100, 100, 30);

  return ;
}

FragTrap::FragTrap(const FragTrap& src)
{
  std::cout << "[ 👾 ] ";
  std::cout << KGRN << "FragTrap copy constructor was called on " << BOLD_A << src._name << RST << "\n";
  *this = src;

  return ;
}

FragTrap::~FragTrap()
{
  std::cout << "[ 👾 ] ";
  std::cout << KRED << "FragTrap named " << BOLD_A << _name << RST;
  std::cout << KRED << " was obliterated." << RST << "\n";

  return ;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
  std::cout << "[ 👾 ] ";
  std::cout << KGRN << "FragTrap copy assignment constructor was called on " << BOLD_A << src._name << RST << "\n";
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }

  return *this;
}