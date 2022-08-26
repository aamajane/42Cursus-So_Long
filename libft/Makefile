# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:02:21 by aamajane          #+#    #+#              #
#    Updated: 2022/02/21 18:20:17 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strncmp.c ft_substr.c \
			ft_strdup.c ft_strjoin.c ft_split.c \
			ft_itoa.c ft_putendl_fd.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIB		=	ar -rcs

RM		=	rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			@$(LIB) $(NAME) $(OBJS)

.c.o:
			@${CC} ${CFLGS} -c $< -o ${<:.c=.o}

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
