volume:	volume.o solidos.o
	gcc -Wall volume.o solidos.o -o volume

vcone:	solidos.o vcones.o
	gcc -Wall solidos.o vcones.o -o vcone

volume.o: volume.c
	gcc -c -Wall volume.c -o volume.o

solidos.o: solidos.c
	gcc -c -Wall solidos.c -o solidos.o

vcones.o: vcones.c
	gcc -c -Wall vcones.c -o vcones.o