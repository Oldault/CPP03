/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Action.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:16:35 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:26:18 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void  FragTrap::highFivesGuys()
{
  if (cantPerform(_name, "high five", 42, _hitPoints)) {
    return ;
  }
  std::cout << "[ 👾 ] ";
  std::cout << KCYN << BOLD_A << _name << RST;
  std::cout << KCYN << " raises his hand tall to get a high five 🖐." << RST << "\n";

  return ;
}
