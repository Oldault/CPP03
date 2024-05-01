/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Action.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 08:42:51 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:02:17 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void  ScavTrap::attack(const std::string& target)
{
  if (cantPerform(_name, "attack", _energyPoints, _hitPoints)) {
    return ;
  }
  _energyPoints -= 1;
  std::cout << "[ ⚙️  ] ";
  std::cout << KMAG << BOLD_A << _name << RST;
  std::cout << KMAG << " strikes " << BOLD_A << target << RST;
  std::cout << KMAG << " with genuine demeanour, dealing  " << BOLD_A << _attackDamage << RST;
  std::cout << KMAG << " points of damage." << RST << "\n";

  return ;
}

void  ScavTrap::guardGate()
{
  if (cantPerform(_name, "guard the gate", _energyPoints, _hitPoints)) {
    return ;
  }
  std::cout << "[ ⚙️  ] ";
  std::cout << KCYN << BOLD_A << _name << RST;
  std::cout << KCYN << " stand tall before the gate 🛡️." << RST << "\n";

  return ;
}
