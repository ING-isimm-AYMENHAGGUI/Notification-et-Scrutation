#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int stat(const char *pathname, struct stat *buf);
int main(int argc, char **argv){
	struct stat sb;
  int i;
	if (argc>5){
	  fprintf(stderr, "Usage: %s <pathname1> <pathname2> ...\n", argv[0]);
    exit(EXIT_FAILURE);
	}
	for(;;){ // Scrutation
		for(i=1; i<argc; i++){

      if (stat(argv[i], &sb) == -1  )
        printf("Dose not exist\n");
      else
        printf("Exist\n");
    }
    sleep(1);
	}
	exit(EXIT_SUCCESS);
}
