/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:53:56 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 13:49:34 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
  std::cout << std::endl;

  std::cout << "Different emojis represent different bots:\n";
  std::cout << "\t[ 🤖 ]:\t" << BOLD("ClapTrap\n");
  std::cout << "\t[ ⚙️  ]:\t" << BOLD("ScavTrap\n");
  std::cout << "\t[ 👾 ]:\t" << BOLD("FragTrap\n");
  std::cout << "\t[ 💎 ]:\t" << BOLD("DiamondTrap\n\n");

  /* functionalities Test */
  {
    std::cout << BOLD("Start of the tests: \n");
    DiamondTrap dt;
    dt.attack("Target1");
    dt.setName("DT-1");

    DiamondTrap dt2("DT-2");
    dt2.attack("Target2");
    dt2.whoAmI();
    dt2.takeDamage(15);
    dt2.beRepaired(10);

    DiamondTrap dtCopy(dt2);
    dtCopy.attack("Target3");

    dt2.attack("Enemy");

    DiamondTrap dtAssigned = dt2;
    dtAssigned.attack("Target4");
  }

  std::cout << std::endl;

  return 0;
}
