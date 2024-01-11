# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hzibari <hzibari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:33:04 by hzibari           #+#    #+#              #
#    Updated: 2023/12/22 11:58:09 by hzibari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	ft_printf.c \
			numbr_printer.c \
			unsigned_printer.c \
			hexa_printer.c \
			adress_printer.c

OFILES	=	$(SRCS:.c=.o)

CC		=	cc
RM		=	-rm -f
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	printf.a

LIBDR = libft
LIBNM = libft.a

all:		$(NAME)

$(NAME): libft $(OFILES)
	@ar -r $(NAME) $(OFILES)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	@make -C $(LIBDR)
	@cp $(LIBDR)/$(LIBNM) .
	@mv $(LIBNM) $(NAME)

clean:
	$(RM) $(OFILES)
	@make -C $(LIBDR) clean

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBDR) fclean

re: fclean $(NAME)

.PHONY: all clean fclean bonus re libft