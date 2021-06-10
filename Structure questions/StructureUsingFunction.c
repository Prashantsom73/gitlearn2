
//call by refrence

#include<stdio.h>
#include<string.h>
struct employee{ //This declares a new user defined datstype
    int code;
    float salary;
    char name[10];
};
void show(struct employee *emp){
    printf("The code for employee is: %d\n",emp->code);
    printf("The code for salary is: %f\n",emp->salary);
    printf("The code for name is: %s\n",emp->name);

    emp->code=121212;
}

int main(){

    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    //(*ptr).code=101;

    ptr->code=101;
    ptr->salary=100121.121;
    
    strcpy(ptr->name,"som");


    show(&e1);
    printf("%d",e1.code);//


}


