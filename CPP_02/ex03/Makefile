# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nicgonza <nicgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/04 08:19:22 by nicgonza          #+#    #+#              #
#    Updated: 2024/09/05 12:40:39 by nicgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSP

CC = c++

CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

RM = rm -f

SRC = main.cpp \
	Fixed.cpp \
	Point.cpp \
	bsp.cpp

OBJTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re