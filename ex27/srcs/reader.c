/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrummuka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:58:57 by jrummuka          #+#    #+#             */
/*   Updated: 2021/10/29 17:44:05 by jrummuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_reader(char *f)
{
	char	oops;
	int		tiedosto;

	tiedosto = open(f, O_RDONLY);
	if (tiedosto < 0)
		return ;
	while (read(tiedosto, &oops, 1))
		write(1, &oops, 1);
	close(tiedosto);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else if (ac == 2)
	{
		ft_reader(av[1]);
		return (0);
	}
}
