/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:13:30 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 13:41:50 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) :
  ClapTrap("defaultDT_clap_name"),
  _name("defaultDT")
{
  std::cout << "[ 💎 ] ";
  std::cout << KGRN << "DiamondTrap " << BOLD_A << _name << RST;
  std::cout << KGRN << " is here!" << RST << "\n";
  
  setStats(FragTrap::_hitPoints, ScavTrap::_energyPoints, FragTrap::_attackDamage);

  return ;
}

DiamondTrap::DiamondTrap(const std::string& name) :
  ClapTrap(name + "_clap_name"),
  _name(name)
{
  std::cout << "[ 💎 ] ";
  std::cout << KGRN << "DiamondTrap named " << BOLD_A << _name << RST;
  std::cout << KGRN << " is here!" << RST << "\n";
  
  setStats(FragTrap::_hitPoints, ScavTrap::_energyPoints, FragTrap::_attackDamage);

  return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
  *this = src;
  std::cout << "[ 💎 ] ";
  std::cout << KGRN << "DiamondTrap copy constructor was called on " << BOLD_A << src._name << RST << "\n";

  return ;
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "[ 💎 ] ";
  std::cout << KRED << "DiamondTrap named " << BOLD_A << _name << RST;
  std::cout << KRED << " was struck by lightning." << RST << "\n";

  return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
  std::cout << "[ 💎 ] ";
  std::cout << KGRN << "DiamondTrap copy assignment constructor was called on " << BOLD_A << src._name << RST << "\n";
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }

  return *this;
}