#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char a,i='i',f='f';
    printf("type i if you are Indian or type f if you are French: ");
    scanf("%c",&a);
    
    if(a==i){
        namaste();
    }
    else if (a==f){
        bonjour();
    }
    else{
        printf("not a valid country");
    }
    
    return 0;
}

void namaste(){
    printf("Namaste");
}

void bonjour(){
    printf("Bonjour");
}
