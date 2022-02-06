/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme < mde-alme@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:47:43 by mde-alme          #+#    #+#             */
/*   Updated: 2022/02/06 15:39:41 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	func_while(int x, int y);

void	rush01(int y, int x)
{
	if (x <= 0 || y <= 0)
		return ;
	x--;
	y--;
	func_while(x, y);
}

void	func_while(int x, int y)
{
	int	c;
	int	l;

	c = x;
	l = 0;
	while (c <= x)
	{
		l = 0;
		while (l <= y)
		{
			if ((c == 0 && l == 0) || (c == x && l == y && c != 0 && l != 0))
				ft_putchar('/');
			else if ((c == 0 && l == y) || (c == x && l == 0))
				ft_putchar('\\');
			else if (c == 0 || l == 0 || l == y || c == x)
				ft_putchar('*');
			else
				ft_putchar (' ');
			l++;
		}
		c++;
		ft_putchar ('\n');
	}	
}