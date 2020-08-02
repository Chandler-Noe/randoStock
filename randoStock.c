/* Chandler Noe, 2020 */

/* ----------STOCK YOLO---------- */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define OPTIONNUM 13

int main(void) {

  int i;
  int random;
  FILE *fp;
  char *ticker;
  char *name;
  char etf[1];
  char type[13][64] = {
                    "Call",
                    "Put",
                    "Call Credit Spread",
                    "Call Debit Spread",
                    "Put Credit Spread",
                    "Put Debit Spread",
                    "Iron Condor",
                    "Butterfly",
                    "Diagonal Spread",
                    "Double Diagonal Spread",
                    "Straddle",
                    "Strangle",
                    "Box Spread"
  };

  printf("Welcome, here is a random stock to YOLO.\n\n");

  //Seeding rng
  srand(time(0));

  for (i = 0; i < OPTIONNUM; i++) {

      random = (rand() % (OPTIONNUM-0+1)) + 0;

  }



  fp = fopen("NasdaqListed.txt","r");

  if (fp ==NULL) {
    fprintf(stderr,"Error! Cant open file!\n");
    exit(1);
  }


  fclose(fp);

  //Printing information
  printf("Ticker: %s\n",ticker);
  printf("Name: %s\n",name);
  printf("ETF: %s\n\n",etf);
  printf("Option Type: %s\n",type[random]);

  return 0;
}
