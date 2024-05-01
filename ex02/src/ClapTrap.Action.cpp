/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Action.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:11:33 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:00:55 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void  ClapTrap::print_incapacity(std::string name, std::string action, std::string reason)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KRED << BOLD_A << name << RST;
  std::cout << KRED << " could not " << action;
  std::cout << " as he has no " << reason << " left." << RST << "\n";

  return ;
}

bool  ClapTrap::cantPerform(std::string name, std::string action, int energyPoints, int hitPoints)
{
  if (energyPoints < 1) {
    print_incapacity(name, action, "energy");
    return true;
  }
  if (hitPoints < 1) {
    print_incapacity(name, action, "health points");
    return true;
  }
  return false;
}

void  ClapTrap::attack(const std::string& target)
{
  if (cantPerform(_name, "attack", _energyPoints, _hitPoints)) {
    return ;
  }
  _energyPoints -= 1;
  std::cout << "[ 🤖 ] ";
  std::cout << KMAG << BOLD_A << _name << RST;
  std::cout << KMAG << " attacks " << BOLD_A << target << RST;
  std::cout << KMAG << ", causing  " << BOLD_A << _attackDamage << RST;
  std::cout << KMAG << " points of damage." << RST << "\n";

  return ;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  if (cantPerform(_name, "take damage", 42, _hitPoints)) {
    return ;
  }
  _hitPoints -= amount;
  std::cout << "[ 🤖 ] ";
  std::cout << KYEL << BOLD_A << _name << RST;
  std::cout << KYEL << " loses " << BOLD_A << amount << RST;
  std::cout << KYEL << " health points. He is now at " << BOLD_A << _hitPoints << RST;
  std::cout << KYEL << " health points." << RST << "\n";

  return ;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (cantPerform(_name, "repair himself", _energyPoints, _hitPoints)) {
    return ;
  }
  _energyPoints -= 1;
  _hitPoints += amount;
  std::cout << "[ 🤖 ] ";
  std::cout << KBLU << BOLD_A << _name << RST;
  std::cout << KBLU << " restores " << BOLD_A << amount << RST;
  std::cout << KBLU << " health points. He is now at " << BOLD_A << _hitPoints << RST;
  std::cout << KBLU << " health points." << RST << "\n";

  return ;
}
