# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 16:03:04 by ylarhris          #+#    #+#              #
#    Updated: 2023/05/30 18:52:18 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
# CFLAGS		=	-Werror -Wextra -Wall 
RM			=	rm -rf
SRCS 		= ./utils/check_args.c ./utils/check_int.c 
				

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

all			:	$(NAME)
bonus		:	$(NAME_BONUS)

$(NAME)		: $(OBJS)
			make -C libft
			$(CC)  $(OBJS) libft/libft.a -o $(NAME)
			

clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)
			make clean -C libft

fclean		: clean
			$(RM) $(NAME) $(NAME_BONUS)
			make fclean -C libft

re			: fclean all