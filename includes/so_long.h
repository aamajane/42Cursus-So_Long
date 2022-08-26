/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:21:57 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/26 18:03:26 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <fcntl.h>
# include <mlx.h>

# define BUF_SIZE	10
# define UP			13
# define DOWN		1
# define RIGHT		2
# define LEFT		0
# define UP_1		126
# define DOWN_1		125
# define RIGHT_1	124
# define LEFT_1		123
# define ESC		53
# define ENTRE		36
# define SPACE		49

typedef enum e_name
{
	bl,
	bg,
	wl,
	wl1,
	ex,
	cb,
	cg,
	ck,
	cp,
	cr,
	nsr,
	nsl,
	nd,
	na,
	psr,
	psl,
	prr,
	prl,
	prur,
	prul,
	prdr,
	prdl,
	pdr,
	pdl,
	par,
	pal,
	pa,
	yw,
	ywr,
	yl,
	ylr,
	mnr,
	mnl
}				t_name;

typedef struct s_data
{
	t_name	name;
	char	**map;
	void	*mlx;
	void	*win;
	void	*img[33][15];
	char	*path[33][15];
	int		timer[33];
	int		index[33];
	int		img_width;
	int		img_height;
	int		mv_count;
	int		c_count;
	int		enmy_m;
	int		enmy_d;
	int		direct;
	int		attack;
	int		height;
	int		width;
	int		y_win;
	int		y_lose;
	int		p_died;
	int		purple;
	int		green;
	int		blue;
	int		pink;
	int		red;
	int		run;
	int		px;
	int		py;
	int		x;
	int		y;
	int		i;
}				t_data;

typedef struct s_var
{
	int	c;
	int	e;
	int	p;
	int	i;
	int	j;
}				t_var;

// read_map.c
char	**read_map(char *arg);
int		map_height(char **map);
int		map_width(char **map);
void	init_count(t_var *count);

// get_next_line.c
char	*get_next_line(int fd);
void	get_file(int fd, char **stock, char **line, char **buf);
char	*get_line(char **stock, char **line);
void	get_free(char **str);

// validate_map.c
int		check_map_extension(char *arg);
int		check_map_rectangular(char **map);
int		check_map(char **map);
int		check_map_wall(char **map);
int		check_map_char(char **map);

// creat_game.c
void	creat_game(t_data *data);
void	init_map(t_data *data);
void	get_img_map(t_data *data);
void	convert_crystal_1(t_data *data);
int		convert_crystal_2(t_data *data);

// get_img_path.c
void	get_img_path(t_data *data);
void	get_background_path(t_data *data);
void	get_crystall_path(t_data *data);
void	get_enemy_path(t_data *data);
void	get_attack_path(t_data *data);

// get_player_path.c
void	get_player_stand_path(t_data *data);
void	get_player_run_hor_path(t_data *data);
void	get_player_run_ver_path(t_data *data);
void	get_player_lose_path(t_data *data);
void	get_player_attack_path(t_data *data);

// init_img.c
void	init_all_img(t_data *data);
void	init_all_img_2(t_data *data);
void	init_all_img_3(t_data *data);
void	init_all_img_4(t_data *data);
void	init_all_img_5(t_data *data);

// key_press.c
int		key_press(int keycode, t_data *data);
void	key_press_2(int keycode, t_data *data);
int		key_press_3(int keycode, t_data *data);
void	*xpm_img(t_data *data, void *img, char *path);
void	put_img(t_data *data, void *img, int x, int y);

// key_release.c
int		key_release(int keycode, t_data *data);
int		key_release_2(int keycode, t_data *data);
int		close_win(t_data *data);
void	open_exit(t_data *data);

// move_player.c
void	move_up(t_data *data);
void	move_down(t_data *data);
void	move_right(t_data *data);
void	move_left(t_data *data);
void	correct_direction(t_data *data, int choise);

// move_enemy.c
void	move_enemy(t_data *data);
void	move_enemy_up(t_data *data);
void	move_enemy_down(t_data *data);
void	move_enemy_right(t_data *data);
void	move_enemy_left(t_data *data);

// render_frame.c
int		render_frame(t_data *data);
void	render_crystal(t_data *data);
void	render_enemy(t_data *data);
void	render_player(t_data *data);
void	render_exit(t_data *data);

// render_crystal.c
void	render_crystal_blue(t_data *data);
void	render_crystal_green(t_data *data);
void	render_crystal_pink(t_data *data);
void	render_crystal_purple(t_data *data);
void	render_crystal_red(t_data *data);

// render_player_stand.c
void	render_player_sr(t_data *data);
void	render_player_sl(t_data *data);
void	render_player_dr(t_data *data);
void	render_player_dl(t_data *data);

// render_player_moves_1.c
void	render_player_rur(t_data *data);
void	render_player_rul(t_data *data);
void	render_player_rdr(t_data *data);
void	render_player_rdl(t_data *data);

// render_player_moves_2.c
void	render_player_rr(t_data *data);
void	render_player_rl(t_data *data);

// render_player_attack.c
void	render_player_ar(t_data *data);
void	render_player_al(t_data *data);
void	render_attack(t_data *data, int y, int x);

// render_enemy.c
void	render_enemy_sr(t_data *data);
void	render_enemy_sl(t_data *data);
void	render_enemy_d(t_data *data, int y, int x);
void	render_enemy_a(t_data *data, int y, int x);
void	extra_enemy_ft(t_data *data, int choise);

// game_status.c
void	you_win(t_data *data);
void	you_lose(t_data *data);
void	put_string(t_data *data);
void	init_index(t_data *data);
int		is_crystal(char c);

#endif
