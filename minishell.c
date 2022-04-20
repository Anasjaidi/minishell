/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi < ajaidi@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:44:50 by ajaidi            #+#    #+#             */
/*   Updated: 2022/04/20 14:31:20 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*str;
	t_token	*root = NULL;

	while (1)
	{
		str = readline("Minishell@robin:");
		if (str)
			token(str, &root);
		//printf("[%d]=>[%s]\n", root->type, root->str);
		display_node(root);
		clr_lst(&root, root);
		root = NULL;
	}
}
