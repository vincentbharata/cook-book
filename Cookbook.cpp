#include <stdio.h>
#include<string.h>
#include <stdlib.h>
void homecook();
void homecook1();
void inputrecipes();
struct recipee {
    char bahan[101];
    char instruksi[101];
}rp[101];
struct node {
    int num;
    char recipe[101];
    node *next;
}*head,*tail;

node *createnode(const char *recipe,int num){
    node *newnode = (node*)malloc(sizeof(node));
    strcpy(newnode->recipe,recipe);
    newnode->num=num;
    newnode->next=NULL;
    return newnode;
}
void pushtail(const char *recipe,int num){
    node *temp=createnode(recipe,num);
    if (!head){
        head = tail = temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void homecook(){
    while (1){
        system("cls");
        printf ("======================================\n");
        printf ("================CookBook==============\n");
        printf ("======================================\n");
        puts("");
        puts("===Menu===");
        puts("1.Input Recipes");
        puts("2.Search Recipes");
        puts("3.Exit to Main menu");
        printf(">> ");
        while (1){
            int pilih;
            scanf ("%d",&pilih);
            if(pilih==1){
                inputrecipes();
                break;
            }
            else if (pilih==2){
                //searchrecipes();
                break;
            }
            else if (pilih==3){
                //mainmenu();
                break;
            }
            else{
                printf("Please input 1-3!\n");
            }
        }
        break;
    }
}
void homecook1 (){
    while (1){
        system("cls");
        printf ("======================================\n");
        printf ("================CookBook==============\n");
        printf ("======================================\n");
        puts("");
        puts("===Menu===");
        puts("1.Input Recipes");
        puts("2.Search Recipes");
        puts("3.Exit to Main menu");
        printf(">> ");
        while (1){
            int pilih;
            scanf ("%d",&pilih);
            if(pilih==1){
                inputrecipes();
                break;
            }
            else if (pilih==2){
                //searchrecipes();
                break;
            }
            else if (pilih==3){
                //mainmenu();
                break;
            }
            else{
                printf("Please input 1-3!\n");
            }
        }
        break;
    }
}
void inputrecipes(){
    system("cls");
    char resep[101];
    int a,b,c;
    int i=0;
    printf("Input name of recipes:");
    while (1){
        scanf ("%[^\n]",resep);
        getchar();
        pushtail(resep,i+1);
        getchar();
        printf("\nInput the number of ingredients:");
        scanf ("%d",&a);
        getchar();
        for (int j=0;j<a;j++){
            scanf ("%[^\n]",rp[j].bahan);
            getchar();
        }
        scanf ("%d",&b);
        getchar();
        for (int j=0;j<b;j++){
            scanf ("%[^\n]",rp[j].instruksi);
            getchar();
        }
        
            printf ("Please Input:\n");
            printf("1.Back To Homecook\n");
            printf("2.Back To Homepage\n");
            printf ("3.Input new recipe\n");
            printf (">> ");
            scanf ("%d",c);
            getchar();
            if (c==1){
                homecook();
                break;
            }
            else if(c==2){
                mainmenu();
                break;
            }
            else if (c==3){
                i++;
                continue;
            }
            else{
                printf ("Please Input beetween 1-3\n");
            }
        
        
    }
    
}
int main (){
    homecook();
    return 0;
}
