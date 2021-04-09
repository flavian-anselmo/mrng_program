 /**
     * the general format of a quadratic equation 
     * ax^2+bx+c=0
     * 2x^2+2x-5=0
     * a=2,b=2,c=-5
     * the highestdegree of a quadratic equation is 
     * 2 hence they have 2 roots 
     * ---variales neede are a,b &c
     * solve by foromula 
     * x=-b+-sqrt(b^2-4ac)/2a
     * descriminant-->b^2-4ac
     * if the descriminant is <(no real roots)
     * if the descriminant =0(two equal roots -&+)
     * if the decriminant is >0
     * remember var cant be zero becoz a number quontient zero is undefined 
     */
#include<stdio.h>
#include<math.h>//used the math lib to get the sqrt function 
void get_roots_By_FormulaMethod();
int main(void){
    int a,b,c;
    double _descriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    //check if a is zero then call tthe function 
    if (a == 0){
       printf("Oops Undefined!!!!");
    }else{
        //function call 
        get_roots_By_FormulaMethod(&a,&b, &c,&_descriminant);
    }    
}

void get_roots_By_FormulaMethod(int *a,int *b,int *c ,double *_DES){
    double root_one,root_two,val_zero;//variables 
    //check for the descriminantconditions and call the functions 
    *_DES=((*b)*(*b))-(4*(*a)*(*c));

    //Change the values to negtive where necessary 
    *b=-*b;
    //convert b into a negative value 
    
    //make the conditions and getthe sqrt 
    if (*_DES>0){
        //get the two roots 
        *_DES=sqrt(*_DES);//get the square root 
        root_one = ((*b)-(*_DES))/(2*(*a));//get the root one by formula 
        root_two = ((*b)+(*_DES))/(2*(*a));
        printf("The root(1)is:%lf\n",root_one);
        printf("The root(2)is:%lf\n",root_two);
    }else if (*_DES==0){
        //get the two equal roots 
        *_DES=sqrt(*_DES);
        val_zero = (*b)/(2*(*a));
        //print the equal roots in positive and negative format 
        printf("The value is (-)%lf\n",val_zero);
        printf("The value is (+)%lf\n",val_zero);      

        
    }else if (*_DES<0){
        //we cant get the square root of real numbers 
        printf("imaginary values (i)");
    }
}
