#include<stdio.h>
#include<string.h>

typedef struct citizen_address
{
    char city[100];
    char state[100];
    int block_no;
    int house_no;
}CA;

void printadd(CA add);

int main(){
    CA add[5];
    printf("Enter the Details of first citizen: ");
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);
    scanf("%d",&add[0].block_no);
    scanf("%d",&add[0].house_no);

    printf("Enter the Details of second citizen: ");
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);
    scanf("%d",&add[1].block_no);
    scanf("%d",&add[1].house_no);

    printf("Enter the Details of third citizen: ");
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);
    scanf("%d",&add[2].block_no);
    scanf("%d",&add[2].house_no);    

    printf("Enter the Details of fourth citizen: ");
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);
    scanf("%d",&add[3].block_no);
    scanf("%d",&add[3].house_no);

    printf("Enter the Details of fifth citizen: ");
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);
    scanf("%d",&add[4].block_no);
    scanf("%d",&add[4].house_no);

    printadd(add[0]);
    printadd(add[1]);
    printadd(add[2]);
    printadd(add[3]);
    printadd(add[4]);

    return 0;

}
void printadd(CA add){
    printf("Address is: %s, %s, %d, %d",add.city,add.state,add.block_no,add.house_no);
}
