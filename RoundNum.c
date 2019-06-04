#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int
main(int argc, char* argv[]){
    double decimal;
    double number;
    number = atof(argv[1]);
    decimal = number - (int) number;
    if(decimal < 0.5){
        number = number - decimal;
    }
    else{
        number = number - decimal + 1;
    }
    printf("%0.2lf\n", number);
    return 0;
}