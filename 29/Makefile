C_FLAGS = -W -Wall -Wextra
C_LIBS = -lcurses

dynosaur.o: dynosaur.c
	gcc -c $(C_FLAGS) $^ $(C_LIBS) 

test: test.c dynosaur.o  
	gcc $(C_FLAGS) $^ $(C_LIBS) -o $@
