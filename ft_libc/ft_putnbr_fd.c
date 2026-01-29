/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:30:29 by gamercha          #+#    #+#             */
/*   Updated: 2026/01/28 23:30:32 by gamercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}
void	ft_putnbr_fd(int nb, int fd)
{
	char	num;

	if (nb <= -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (nb < 0)
	{
		ft_putstr_fd("-", fd);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb <= 9)
	{
		num = nb + 48;
		write(fd, &num, 1);
	}
}
/*#include <fcntl.h>
int main()
{
    ft_putnbr_fd(-4623827, open("testo.txt",O_RDWR | O_CREAT, 0640));
    //create new folder and user can w and r and group can r
    return 0;
}*/