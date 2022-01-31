# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschmitt <tschmitt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 15:49:33 by tschmitt          #+#    #+#              #
#    Updated: 2022/01/31 15:49:55 by tschmitt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -I $(INCDIR)


BIN = trap
SRCDIR = ./
OBJDIR = ./obj
INCDIR = ./
EXTENSION = .cpp


SRC = $(wildcard $(SRCDIR)/*$(EXTENSION))
OBJ = $(SRC:$(SRCDIR)/%$(EXTENSION)=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)



all: $(BIN)
	


$(BIN): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


%.d: $(SRCDIR)/%$(EXTENSION)
	@$(CPP) $(CFLAGS) -I $(INCDIR) $< -MM -MT $(@:%.d=$(OBJDIR)/%.o) >$@


$(OBJDIR)/%.o: $(SRCDIR)/%$(EXTENSION)
	@mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) -o $@ -c $<


.PHONY: clean
clean:
	$(RM) $(OBJ) $(DEP)


.PHONY: fclean
fclean: clean
	$(RM) $(BIN)


.PHONY: re
re: fclean all	
