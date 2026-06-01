#include <stdio.h>
     union Data{
        int id;
        char grade;
        float rating;
    };
int main(){

    union Data datum1;

    /*
    This is the difference between struct and union as you see if you try to see the out put of this codes 
    you will not see 3 because union only use one memory of the largest element of it's members so it will out put the 
    garbage value what just it have that will mean so it only stores one variable at a time if you want to output 
    all you would each at a time see the codes that are not commented will run but this commented will run 

    datum1.id = 3;
    datum1.grade = 'A';
    printf("%d",datum1.id);
    */

      
   // this codes will work because each union member is created on it self and printed  on it's time 
   // while on the codes commented that of grade overwrites the datum.id so datum.id will not be printed while only grade 
   //should be printed only

    datum1.id = 5;
    printf("%d \n",datum1.id);

    datum1.rating = 4.5;
    printf("%.2f",datum1.rating);
    return 0;
    
}