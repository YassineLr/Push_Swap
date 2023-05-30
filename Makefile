# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 16:03:04 by ylarhris          #+#    #+#              #
#    Updated: 2023/05/30 17:08:03 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
NAME_BONUS	=	checker
CC			=	cc
# CFLAGS		=	-Werror -Wextra -Wall 
RM			=	rm -rf
SRCS 		= ./utils/check_args.c ./utils/check_int.c 
				
				
SRCS_BONUS	=	bonus/push_swap_b.c bonus/get_next_line_bonus.c \
				bonus/get_next_line_utils_bonus.c bonus/push.c \
				bonus/reverse_rotate.c bonus/rotate.c \
				bonus/swap.c bonus/utils.c bonus/stack.c  bonus/blabla.c \
				
				
OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

all			:	$(NAME)
bonus		:	$(NAME_BONUS)

$(NAME)		: $(OBJS)
			make -C libft
			$(CC)  $(OBJS) libft/libft.a -o $(NAME)
			
			
$(NAME_BONUS) 	: $(OBJS_BONUS)
				make -C libft
				$(CC) $(OBJS_BONUS) libft/libft.a -o $(NAME_BONUS)

clean		:
			$(RM) $(OBJS) $(OBJS_BONUS)
			make clean -C libft

fclean		: clean
			$(RM) $(NAME) $(NAME_BONUS)
			make fclean -C libft

re			: fclean all