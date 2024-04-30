/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:53:56 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/30 16:38:30 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  std::cout << std::endl;

  /* functionalities Test */
  {
    ClapTrap ct1("CT-1");
    ct1.attack("Target1");
    ct1.takeDamage(10);
    ct1.attack("Target1");

    ClapTrap ct2(ct1);
    ct2.setName("CT-2");
    ct2.attack("Target2");

    ClapTrap ct3("CT-3");
    ct3.beRepaired(5);
    for (int i = 0; i < 10; i++) {
        ct3.attack("Target3");
    }
    ct3.beRepaired(5);
  }

  std::cout << std::endl;

  return 0;
}
