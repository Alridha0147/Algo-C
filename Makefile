# Makefile pour un programme simple en C

CC = gcc
CFLAGS = -Wall
LDFLAGS = -lm

# Règle pour la cible "mon_programme"
mon_programme: main.o fonctions.o
	$(CC) $(CFLAGS) -o mon_programme main.o fonctions.o $(LDFLAGS)

# Règle pour la cible "main.o"
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Règle pour la cible "fonctions.o"
fonctions.o: fonctions.c
	$(CC) $(CFLAGS) -c fonctions.c

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f mon_programme *.o