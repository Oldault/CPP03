/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:43:28 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 13:57:52 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP
# define _DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
    std::string _name;
  
  public:

    DiamondTrap( void );
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& src);
    ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& src);

    void  setName(std::string name);

    void  attack(const std::string& target);
    void  whoAmI( void );
};

#endif
