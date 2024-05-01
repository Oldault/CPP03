/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:54:18 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 08:34:18 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

#include "Colors.h"
#include <string>
#include <iostream>

class ClapTrap
{
  private:
  
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    
  public:

    ClapTrap( void );
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& src);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& src);

    void  setName(std::string name);

    /* Actions (inside `ClapTrap.Action.cpp`) */
    void  attack(const std::string& target);
    void  takeDamage(unsigned int amount);
    void  beRepaired(unsigned int amount);
};

#endif