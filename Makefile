all:Main.c Source/Arvore.c
	gcc Main.c -o EXEC_GCC Source/Arvore.c

clang:Main.c Source/Arvore.c
	clang Main.c -o EXEC_CLANG Source/Arvore.c
