#include <stdio.h>
int slp(int pixel[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == pixel[i][0] && pin == pixel[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int pixel[3][2] = {{2323,2323},{1256,1256},{8989,8989}};
    int id,pin;
    printf("Please Enter your ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(slp(pixel,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN PLEASE TRY AGAIN!");
    }
    return 0;
}
