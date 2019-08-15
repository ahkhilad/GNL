/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkhilad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 11:42:53 by ahkhilad          #+#    #+#             */
/*   Updated: 2019/05/04 16:13:04 by ahkhilad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
# include "libft/libft.h"

typedef struct	s_stock
{
	char			*content;
	int				fd_id;
	struct s_stock	*next;
}				t_stock;

typedef struct	s_var
{
	t_stock		*tmp;
	size_t		check;
	char		buf[BUFF_SIZE + 1];
}				t_var;

int				get_next_line(const int fd, char **line);

#endif
