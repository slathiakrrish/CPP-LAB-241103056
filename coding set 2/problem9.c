#include<stdio.h>

int main(){
char *a = "Akhil"; 
char *b = "Ram"; 
char *c = "Raj";
char *d = "Singham";
char *e = "Don";

char *arr[5]={a, b, c, d, e};

printf("Name of students : ");
for (int i=0; i<5; i++){
    printf("%s\n", *(arr+i));
}

return 0;

}