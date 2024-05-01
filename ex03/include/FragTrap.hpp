/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolodin <svolodin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:12:29 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/01 10:13:23 by svolodin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:

    FragTrap( void );
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& src);
    ~FragTrap();

    FragTrap& operator=(const FragTrap& src);

    void  highFivesGuys( void );
};

#endif