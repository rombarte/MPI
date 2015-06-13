/* Autor: Bartłomiej Romanek			*/
/* Tytuł: "Hello World" na wszystkich procesach */
/* Licencja: Licencja MIT			*/
/* Data modyfikacji: 13.06.2015			*/

#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);
	int i, n;
	MPI_Comm_rank(MPI_COMM_WORLD, &i);
	MPI_Comm_size(MPI_COMM_WORLD, &n);
	printf("Hello World! I am process %i and there are %i processes in total!\n", i, n);
	MPI_Finalize();
	return 0;
}

/* Opis kodu: Program wyświetla tekst, w którym znajduje się informacja o numerze procesu oraz o ich łącznej sumie.
Tekst ten zostaje wyświetlony tyle razy, ile jest dostępnych procesów. Warto zauważyć, że procesy są numerowane od zera
i wyświetlane w nieznanej wcześniej kolejności. */
