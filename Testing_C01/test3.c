/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:19:16 by anajmi            #+#    #+#             */
/*   Updated: 2021/06/28 16:19:20 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int n1;
	int n2;
	int	*a;
	int *b;

	n1 = 5;
	a = &n1;
	n2 = 3;
	b = &n2;
	ft_swap(a, b);
	ft_putnbr(n1);
	return (0);
}
