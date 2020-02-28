# Generic C Makefile

C_FLAGS=-g -Wall -W -Wconversion -Wshadow -Wwrite-strings \
	-Wextra -std=c11 -lio

%: %.c
	gcc $^ $(C_FLAGS) -o $@
