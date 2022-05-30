/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <ajaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:44:50 by ajaidi            #+#    #+#             */
/*   Updated: 2022/05/30 01:19:39 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*str;
	t_token	*root;
	t_tree	*head;

	root = NULL;
	while (1)
	{
		str = readline("Minishell@robin:");
		if (str)
			head = token(str, &root);
		clr_lst(&root, root);
		root = NULL;
	}
}
