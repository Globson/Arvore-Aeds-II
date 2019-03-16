all:Main.c EXEC_GCC Source/Arvore.c
	gcc Main.c -o EXEC_GCC Source/Arvore.c

clang:Main.c EXEC_CLANG Source/Arvore.c
	clang Main.c -o EXEC_CLANG Source/Arvore.c
