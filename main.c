/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:11:57 by paulo-do          #+#    #+#             */
/*   Updated: 2023/12/06 00:16:53 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

 int main (void)
 {
 	int c;
 	c = 123456789;
 	//s = "o pato";
 //	ft_printf("%%someth%cing isn't wrong with %s but we never know how
//ab%cout we call the cops to find out? %c\n",c ,s,c, c);
// //	printf("%%something isn't wrong with %s but we never know how about
//we call the cops to find out? %c\n", s, c);
 //	ft_printf("%i\n", c);
 //	printf("%i\n", c);

 //	ft_printf("%d\n", c);
 	//const char *s;

	int i = 0;
 	const char *d;
 	const char *w;
 	const char *f;
 	const char *g;
 	const char *h;
 	const char *j;
 	const char *k;
 	const char *l;
 	const char *p;
 	const char *o;
 	const char *y;
 	const char *t;
 	const char *e;

 	d ="⡴⠑⡄⠀⠀⠀⠀⠀⠀⠀ ⣀⣀⣤⣤⣤⣀⡀";
 	w = "⠸⡇⠀⠿⡀⠀⠀⠀⣀⡴⢿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀";
 	f = "⠀⠀⠀⠀⠑⢄⣠⠾⠁⣀⣄⡈⠙⣿⣿⣿⣿⣿⣿⣿⣿⣆";
 	g = "⠀⠀⠀⠀⢀⡀⠁⠀⠀⠈⠙⠛⠂⠈⣿⣿⣿⣿⣿⠿⡿⢿⣆";
 	h = "⠀⠀⠀⢀⡾⣁⣀⠀⠴⠂⠙⣗⡀⠀⢻⣿⣿⠭⢤⣴⣦⣤⣹⠀⠀⠀⢀⢴⣶⣆";
 	j = "⠀⠀⢀⣾⣿⣿⣿⣷⣮⣽⣾⣿⣥⣴⣿⣿⡿⢂⠔⢚⡿⢿⣿⣦⣴⣾⠸⣼⡿";
 	k = "⠀⢀⡞⠁⠙⠻⠿⠟⠉⠀⠛⢹⣿⣿⣿⣿⣿⣌⢤⣼⣿⣾⣿⡟⠉";
 	l = "⠀⣾⣷⣶⠇⠀⠀⣤⣄⣀⡀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇";
 	p = "⠀⠉⠈⠉⠀⠀⢦⡈⢻⣿⣿⣿⣶⣶⣶⣶⣤⣽⡹⣿⣿⣿⣿⡇";
 	o = "⠀⠀⠀⠀⠀⠀⠀⠉⠲⣽⡻⢿⣿⣿⣿⣿⣿⣿⣷⣜⣿⣿⣿⡇";
 	y = "⠀⠀ ⠀⠀⠀⠀⠀⢸⣿⣿⣷⣶⣮⣭⣽⣿⣿⣿⣿⣿⣿⣿⠇";
 	t = "⠀⠀⠀⠀⠀⠀⣀⣀⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇";
 	e = "⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃";
	 while(i++ < 30)
 		ft_printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", d, w,f, g,h,j,k,l,p,o,y,t,e);


 	printf("%d\n", c);

 unsigned int uuu = 00010001;
 	ft_printf("%u\n",uuu);
 	printf("%u\n",uuu);
 }
