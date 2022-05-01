/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zminhas <zminhas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:52:37 by zminhas           #+#    #+#             */
/*   Updated: 2022/05/01 18:55:57 by zminhas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}
