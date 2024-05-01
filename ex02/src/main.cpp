/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:53:56 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 09:24:04 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
  std::cout << std::endl;

  /* functionalities Test */
  {
    ClapTrap ct("CT-Base");
    ct.attack("Enemy1");
    ct.takeDamage(5);
    ct.beRepaired(5);
    std::cout << std::endl;

    ScavTrap st("ST-Base");
    st.attack("Enemy2");
    st.takeDamage(10);
    st.beRepaired(10);
    st.guardGate();
    std::cout << std::endl;

    FragTrap ft("FT-Base");
    ft.attack("Enemy3");
    ft.takeDamage(15);
    ft.beRepaired(15);
    ft.highFivesGuys();
    std::cout << std::endl;

    ScavTrap stCopy(st);
    stCopy.setName("ST-Copy");
    stCopy.attack("Enemy4");
    std::cout << std::endl;

    FragTrap ftAssigned;
    ftAssigned = ft;
    ftAssigned.setName("FT-Assigned");
    ftAssigned.attack("Enemy5");
    ftAssigned.highFivesGuys();
    
    std::cout << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
