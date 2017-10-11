#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dht_read.h"
#include <time.h> //for printing timestamp


int main(int argc, char* argv[])
{
  unsigned long int ts_7688 = 0;
  // check for the correct number of arguments
  if ( argc < 3 ) 
  {
    printf("Usage:\n");
    printf("\t%s <gpio> <DHT11 || DHT22>\n", argv[0]);
    printf("\n");
    return EXIT_FAILURE;
  }

  int maxRetry = 3;
  float humidity = 0.0f, temperature = 0.0f;
  int result = 0;
  do
  {
    if(strcmp(argv[2], "DHT11") == 0)
    {
      result = dht_read(DHT11, atoi(argv[1]), &humidity, &temperature);
    }
    else if(strcmp(argv[2], "DHT22") == 0)
    {
      result = dht_read(DHT22, atoi(argv[1]), &humidity, &temperature);
    }
    else
    {
      printf("Invalid DHT sensor valids DHT11 || DHT22\n");
      return EXIT_FAILURE;
    }
    maxRetry--;
  } while(result != 0 && maxRetry > 0);

  ts_7688 = time(NULL);
  printf("%d:%f:%f\n", ts_7688, humidity, temperature);
  if(result == 0)
  {
    return EXIT_SUCCESS;
  }
  else
  {
    return EXIT_FAILURE;
  }
}


