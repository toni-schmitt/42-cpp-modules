# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toni <toni@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/15 09:28:41 by toni              #+#    #+#              #
#    Updated: 2022/01/15 09:31:19 by toni             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

BIN = test

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^