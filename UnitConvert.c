#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*===========================================================================*/
#define CONSTF 5.0/9
#define CONSTC 9.0/5
#define CONSTANT 32
#define CM  "cm"
#define M  "m"
#define KM "km"
#define G "g"
#define KG "kg"
#define P "p"
#define F "f"
#define C "c"
#define MI "M"
#define POUNDS 2.20462
#define MILE 1.609
/*===========================================================================*/
void warnings(void);
void newline(void);
void distance(double amount, char type1[10], char type2[10]);
void temperature(double amount, char type1[10], char type2[10]);
void weight(double amount, char type1[10], char type2[10]);

/*===========================================================================*/
int
main(int argc, char* argv[]){
    double amount;
    char type1[10], type2[10];

    warnings();
    printf("Enter a Unit: ");
    scanf("%lf%s %s",&amount, type1, type2);
    distance(amount, type1, type2);
    temperature(amount, type1, type2);
    weight(amount, type1, type2);
    return 0;
}
/*===========================================================================*/
void 
warnings(void){
    newline();
    newline();
    printf("This is a unit converter. This program converts between ");
    printf("the following units:\n");
    newline();
    printf("Distance Units:\n");
    printf("cm m km miles\n");
    newline();
    printf("Weight Units:\n");
    printf("g kg pounds\n");
    newline();
    printf("Temperature Units:\n");
    printf("Farhenheit Celsius\n");
    newline();
    printf("Please use the units as shown above\n");
    newline();
    printf("Enter values as shown below:\n");
    newline();
    printf("E.g.   For cm --> m:  10cm m\n");
    newline();
}
/*===========================================================================*/
void
newline(void){
    printf("\n");
}
/*===========================================================================*/
void 
distance(double amount, char type1[10], char type2[10]){
    if(strcmp(type1,CM) == 0){
        if(strcmp(type2,M)==0){
            amount = amount/100;
            printf("%lf METRES\n", amount);
        }
        if(strcmp(type2,KM)==0){
            amount = amount/100000;
            printf("%lf KILOMETRES\n", amount);
        }
        if(strcmp(type2,MI)==0){
            amount = (amount/1000000)/MILE;
            printf("%lf MILES\n", amount);
        }
    }
    if(strcmp(type1,M) == 0){
        if(strcmp(type2,CM)==0){
            amount = amount*100;
            printf("%lf CENTIMETRES\n", amount);
        }
        if(strcmp(type2,KM)==0){
            amount = amount/1000;
            printf("%lf KILOMETRES\n", amount);
        }
        if(strcmp(type2,MI)==0){
            amount = (amount/1000)/MILE;
            printf("%lf MILES\n", amount);
        }
    }
    if(strcmp(type1,KM) == 0){
        if(strcmp(type2,CM)==0){
            amount = amount*100000;
            printf("%lf CENTIMETRES\n", amount);
        }
        if(strcmp(type2,M)==0){
            amount = amount*1000;
            printf("%lf METRES\n", amount);
        }
        if(strcmp(type2,MI)==0){
            amount = amount/MILE;
            printf("%lf MILES\n", amount);
        }
        
    }
    if(strcmp(type1,MI) == 0){
        if(strcmp(type2,CM)==0){
            amount = amount*MILE*100000;
            printf("%lf CENTIMETRES\n", amount);
            
        }
        if(strcmp(type2,KM)==0){
            amount = amount*MILE;
            printf("%lf KILOMETRES\n", amount);
        }
        if(strcmp(type2,M)==0){
            amount = amount*MILE*1000;
            printf("%lf METRES\n", amount);
        }
        
    }
}
/*===========================================================================*/
void 
temperature(double amount, char type1[10], char type2[10]){
    if(strcmp(type1,C)==0){
        if(strcmp(type2,F)==0){
            amount = amount * CONSTC + CONSTANT;
            printf("%0.2lf FARHENHEIT\n", amount);
        }
    }
    if(strcmp(type1,F)==0){
        if(strcmp(type2,C)==0){
            amount = (amount - CONSTANT) * CONSTF ;
            printf("%0.2lf CELSIUS\n", amount);
        }
    }
}
/*===========================================================================*/
void
weight(double amount, char type1[10], char type2[10]){
    if(strcmp(type1,G)==0){
        if(strcmp(type2,KG)==0){
            amount = amount/1000;
            printf("%0.2lf KILOGRAMS\n", amount);
        }
        if(strcmp(type2,P)==0){
            amount = (amount/1000)*POUNDS;
            printf("%0.2lf POUNDS\n", amount);
        }
    }
    if(strcmp(type1,KG)==0){
        if(strcmp(type2,G)==0){
            amount = amount*1000;
            printf("%0.2lf GRAMS\n", amount);
        }
        if(strcmp(type2,P)==0){
            amount = amount*POUNDS;
            printf("%0.2lf POUNDS\n", amount);
        }
    }
    if(strcmp(type1,P)==0){
        if(strcmp(type2,G)==0){
            amount = (amount/POUNDS) *1000;
            printf("%0.2lf GRAMS\n", amount);
        }
        if(strcmp(type2,KG)==0){
            amount = amount/POUNDS;
            printf("%0.2lf KILOGRAMS\n", amount);
        }
    }
}