# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 15:10:36 by aamajane          #+#    #+#              #
#    Updated: 2022/08/23 18:21:05 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

LIBSLG	=	srcs/libslg.a

LIBFT	=	libft/libft.a

SRCS	=	srcs/render_player_moves_1.c \
			srcs/render_player_moves_2.c \
			srcs/render_player_attack.c \
			srcs/render_player_stand.c \
			srcs/get_player_path.c \
			srcs/render_crystal.c \
			srcs/get_next_line.c \
 			srcs/get_img_path.c \
			srcs/render_frame.c \
			srcs/render_enemy.c \
			srcs/validate_map.c \
			srcs/game_status.c \
			srcs/key_release.c \
			srcs/creat_game.c \
			srcs/move_player.c \
			srcs/move_enemy.c \
			srcs/key_press.c \
			srcs/init_img.c \
			srcs/read_map.c \
			srcs/main.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

MLX		=	-lmlx -framework OpenGL -framework AppKit

LIB		=	ar -rcs

RM		=	rm -rf


all:		$(NAME)

bonus:		$(NAME)

$(NAME):	$(LIBFT) $(LIBSLG)
			@$(CC) $(CFLAGS) $(MLX) $(LIBSLG) $(LIBFT) -o $(NAME)

$(LIBSLG):	$(OBJS)
			@$(LIB) $(LIBSLG) $(OBJS)

$(LIBFT):
			@cd libft && make

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			@$(RM) $(OBJS) $(LIBSLG) $(LIBFT)
			@cd libft && make clean

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
