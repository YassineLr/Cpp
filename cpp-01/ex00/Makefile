# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 01:02:08 by ylarhris          #+#    #+#              #
#    Updated: 2023/11/01 01:03:44 by ylarhris         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brainz

SRC		= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJ		= ${SRC:.cpp=.o}

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

RM		= rm -rf

all	: $(NAME)

${NAME}	: ${OBJ}
		c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean   :
		${RM} ${OBJ}

fclean	: clean
	${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean