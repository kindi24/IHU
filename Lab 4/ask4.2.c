#include <stdio.h>
#include <stdlib.h>

main()

{
		/*
	MATHIMA : DOMHMENOS PROGRAMMATISMOS
	TMHMA : E4
	ERGASTHRIAKH ASKHSH : 4
	HMEROMHNIA : 1/11/2019
	ONOMA : VASILEIOS KYNDELEROS
	*/
	
	int x;
	printf("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
	scanf("%d",&x);
	
	if (x >= 0)
	{
	
	
		switch(x){
	
		case 0: printf("x = 0\n");
 		break;
	
		case 1: printf("x = perittos \n");
    	break;
	
		case 2: printf("x = artios \n");
 		break;
	
		case 3: printf("x = perittos \n");
 		break;
	
		case 4: printf("x = artios \n");
 		break;
	
		case 5: printf("x = perittos \n");
 		break;
	
		default: printf("x > 5 \n");
	}
	
	}
	else 
		printf("Edwses arnhtiko akeraio arithmo \n");

system ("Pause");

}
