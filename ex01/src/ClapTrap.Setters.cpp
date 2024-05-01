/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Setters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:08:04 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:08:27 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void  ClapTrap::setName(std::string name)
{
  std::cout << "[ 🤖 ] ";
  std::cout << KGRN << BOLD_A << _name << RST;
  std::cout << KGRN << " was renamed to " << BOLD_A << name << RST << "\n";

  _name = name;

  return ;
}

void  ClapTrap::setStats(int HP, int EP, int AD)
{
  _hitPoints = HP;
  _energyPoints = EP;
  _attackDamage = AD;

  return;
}
