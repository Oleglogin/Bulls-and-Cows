#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int p = 0;
int bulls = 0;
int cow = 0;
int size = 4;


void genArr(int g[],int size){
    for(int i = 0; i < size; i++){
        int r = rand()%10;
        g[i] = r;
    }
}

void entArr(int *u,int size){
    for(int i = 0; i < size; i++){
        int uN;
        printf("enter the number\n");
        scanf("%d", &uN);
        u[i] = uN;
    }
}

void print_array(int *a,int size){
     printf("\n");
    for (int i = 0; i < size; i++){
        printf(" %d", a[i]);
    }
}

 void bul(int *u, int *g){
    for(int i = 0; i < 4; i++){
        if(u[i] == g[i]){
            bulls++;
        }
    }
    printf("bulls = %d \n", bulls);
}

void coW(int *u, int *g){



    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(u[i] == g[j]){
                cow++;
            }
        }
    }
    printf("cows = %d \n", cow);
}

int main(){

    int g[size];
    int u[size];

    void game(){
        genArr(g,size);
        print_array(g,size);
        while(bulls != 4){
            if (bulls == 4){
                break;
            }
            printf("\n");
            printf("%d attempt \n", p);
            bulls = 0;
            cow = 0;
            entArr(u,size);
            print_array(u,size);
            printf("\n");
            bul(u,g);
            coW(u,g);
            p++;
        }
        printf("you win from  %d attempts", p);
    }

    game();

   return 0;
}
