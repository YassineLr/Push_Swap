# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 16:03:04 by ylarhris          #+#    #+#              #
#    Updated: 2023/06/21 14:12:14 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
# CFLAGS		=	-Werror -Wextra -Wall -fsanitize 
RM			=	rm -rf
SRCS 		= ./utils/check_args.c ./utils/input_handling.c ./Libft/ft_atoi.c ./Libft/ft_putchar_fd.c \
				./Libft/ft_putstr_fd.c ./Libft/ft_split.c ./Libft/ft_strlen.c ./Libft/ft_strdup.c \
				./Libft/ft_strjoin.c ./Libft/ft_substr.c \
				./LinkedList/ft_lstadd_back.c ./LinkedList/ft_lstadd_front.c ./LinkedList/ft_lstclear.c ./LinkedList/ft_lstdelone.c \
				./LinkedList/ft_lstlast.c ./LinkedList/ft_lstnew.c ./LinkedList/ft_lstsize.c ./instructions/sa.c \
				./instructions/sb.c ./instructions/ss.c ./instructions/ra.c ./instructions/rb.c ./instructions/pa.c ./instructions/pb.c \
				./instructions/rr.c ./instructions/rra.c ./instructions/rrb.c ./instructions/rrr.c ./src/push_swap.c ./src/sorting.c\
				./src/sorting_big_numbers.c ./src/sorting_big_numbers_utils.c				
				
OBJS = ${SRCS:.c=.o}

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

NONE	=	'\033[0m'
GREEN	=	'\033[33m'
GRAY	=	'\033[2;37m'
ITALIC	=	'\033[3m'
UNDERLINE	=	'\033[4m'
RED	=	'\033[91m'

# Green="\e[1;32m"

# Blue=$'\e[1;34m'


.c.o	:
			@echo "Making $<..."
			@$(CC) -c $< -o $(<:.c=.o) 

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			@echo "     → Compiling $(NAME)..."
			@$(CC) $(OBJS) -o $(NAME) -fsanitize=address -g3
clean	:
			@echo ${RED} "     - Removing object files..."
			@$(RM) $(OBJS) $(BOBJS)

fclean	:	clean
			@echo "     - Removing $(NAME)..." $(NONE)
			@$(RM) $(NAME)

re		:	fclean all
