/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Action.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:22:58 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 13:42:49 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void  DiamondTrap::attack(const std::string& target)
{
  ScavTrap::attack(target);
  
  return ;
}

void  DiamondTrap::whoAmI()
{
  std::cout << "[ 💎 ] ";
  std::cout << KCYN << "DiamondTrap's name is " << BOLD_A << _name << RST;
  std::cout << KCYN << ". But he originated from the ClapTrap named " << BOLD_A << ClapTrap::_name << RST << "\n";
}