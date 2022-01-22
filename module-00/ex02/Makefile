# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toni <toni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 09:28:41 by toni              #+#    #+#              #
#    Updated: 2022/01/21 21:56:28 by toni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

BIN = test

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(BIN)

re: fclean all