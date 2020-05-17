/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 03:06:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/11 20:18:52 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_test.h"

int main(void)
{
	ft_strlen_test();
	ft_strcpy_test();
	ft_strcmp_test();
//#ifndef __linux__
	ft_write_test();
	ft_read_test();
//#endif
	ft_strdup_test();

	return 0;
}
