#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int num;
    typedef struct{
        float price;
        char name[100];
        int quantity;
       
    }item[50];
    int index;
    struct additem(item.name,item.price,item.quantity)
    {
         printf("please enter the items name\n");
        scanf("%s",&item[index].name);
          printf("please enter the items price\n");
        scanf("%s",&item[index].price);
          printf("please enter the items quantity");
        scanf("%s",&item[index].quantity);
        printf("the item has been registered succesfully")
       return item[index];
        
    }
    void showlist(index){
        for(int i=0;i<index;i++){
            printf("%d.name:%s |price:%.2f|quantity:%d\n",i+1,item[i].name,item[i].price,item[i].quantity);
        }
        
    }
    itemdetails(Name){

        for(int i=0;i<index;i++){
            if(strcmp(Name,item[i].name==0)){
                printf("%d.name:%s |price:%.2f|quantity:%d\n",i+1,item[i].name,item[i].price,item[i].quantity);
                break;
            }
        }
    }
    int modifyamount(num +1){
        int change;
        
        printf("please enter the amount by wich the stock incresed or decresed\n ");
        scanf("%d",&change);
    item[num].quantity+=change;
    return  item[num].quantity;   
    }
    float showtotal(){
        float total=0;
        for(int i=0;i<index;i++){
            total+=item[i].price*item[i].quantity;
        }
        printf("the total worth of all items stock is %.2f\n",total);
        return total;
    }
    removeitem();
    exitprogram();
int main() {
    int choice:
    int max;
     char Name[100];
    printf("hi welcome to the progamme,please set the maximum amount of items you wanna store(cant surpass 50 items)\n");
    scanf("%d",&max);
    printf("please select your desired option\n
        1.add item
        2.show list
        3.search item details
        4.modify stock
        5.calculate net worth of stock
        \n" );
        scanf("%d",&choice);
    switch(choice)
    case 1:
      additem(item.name,item.price,item.quantity); 
       index++;
        
    break;
    case 2:
       showlist(index);
    break;
    case 3:
           
        printf("please enter item name\n");
        scanf("%s",Name);
    itemdetails()
    break;
    case 4:
     modifyamount(num +1);
    break;
    case 5:
    showtotal();
    break;
     case 6:
    
    break;
     case 7:
    
    break;
    return 0;
}