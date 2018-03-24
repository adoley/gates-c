#include <stdio.h>

	 int notGate(int input){
		if(input==0)
			return 1;
		return 0;
	  }

         int andGate(int firstInput,int secondInput){
		if(firstInput==0 || secondInput==0)
			return 0;
		return 1;
	}

	int norGate(int firstInput,int secondInput){
		if(firstInput==0 && secondInput==0)
			return 1;
		return 0;
	}

       int xorGate(int firstInput,int secondInput){
		if(firstInput==secondInput)
		 	return 0;
		return 1;
	}
       int orGate(int firstInput, int secondInput){
		if(firstInput==1 || secondInput==1)
			return 1;
		return 0; 	
	}

int main() 
{ 
   
    int result,a,b,loop=1,notA,notB,andOutput,norOutput;

   while(loop==1){
    
        printf("\n Enter the value of A : ");
        scanf("%d",&a);
        printf("\n Enter the value of B : ");
        scanf("%d",&b);
        
	if(a>=0 && a<=1 && b>=0 && b<=1){

		//Here you define your circuit
    		notA=notGate(a);    //use not gate  
		notB=notGate(b);
		andOutput=andGate(notA,notB); // use and gate
		norOutput=norGate(a,b); //use nor gate      
		result=xorGate(andOutput,norOutput); //use xor gate
		//circuit defination ends
    		
		printf("\n The output the circuit : ");
    		printf("%d \n",result);
	}else{
		printf("\nValue of A & B should be either 1 or 0 \n");
	}

	printf("\nPress 1 to continue or press any other key to exit : ");
    	scanf("%d",&loop);
     }
    return 0;
}
