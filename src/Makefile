CC = gcc
CG = g++
FLAGS = -Wall -Werror -Wextra -g 
GFLAGS = -std=c++17 -g -Wall -Werror -Wextra 
CFLAGS = -lstdc++


# Directory
CLIFD = ./gui/cli/
CONFD = ./gui/controller/
MODFD = ./brick_game/
SNKFD = ./brick_game/snake/


test: clear
	$(CG) $(GFLAGS) $(CLIFD)* $(CONFD)* $(MODFD)* $(SNKFD)* 

clear:
	rm -rf $(CLIFD)*.gch $(CONFD)*.gch $(SNKFD)*.gch $(MODFD)*.gch 