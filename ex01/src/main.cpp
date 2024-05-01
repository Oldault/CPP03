/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:53:56 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 08:55:38 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  std::cout << std::endl;

  /* functionalities Test */
  {
    ScavTrap st1("ST-1");
    st1.attack("Enemy1");
    st1.takeDamage(20);
    st1.beRepaired(15);
    st1.guardGate();

    ScavTrap st2 = st1;
    st2.setName("ST-2");
    st2.attack("Enemy2");
    st2.setStats(100, 100, 20);
    st2.attack("Enemy3");

    ScavTrap st3(st2);
    st3.setName("ST-3");
    st3.guardGate();
    st3.takeDamage(50);
    st3.attack("Enemy4");
    
    ScavTrap st4("ST-4");
    st4.takeDamage(100);
    st4.guardGate();
    
    std::cout << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
