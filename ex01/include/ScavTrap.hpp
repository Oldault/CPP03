/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:44:28 by svolodin          #+#    #+#             */
/*   Updated: 2024/04/30 17:31:25 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{  
  public:

    ScavTrap( void );
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& src);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& src);

    void  setName(std::string name);
  
};

#endif