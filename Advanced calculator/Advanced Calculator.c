/*
Project: Advanced Calculator Using C programming
Date: 24-aug-2025
Developer: Yuvraj Kumar Singh
*/


#include<stdio.h>

// Function Protocol
void displaymenu();
void Addition();
void Subtraction();
void Multiplication();
void Divide();
void LCM();
void HCF();
void Factorial();
void Square();
void Cube();
void Power();
void odd_even();
void prime();


//Function Define for menu
void displaymenu(){
	printf("\n");
	printf("\n+-------------------------------------------+\n");
	printf("|          Menu Of RiseX Calculator         |\n");
	printf("+-------------------------------------------+\n");
	printf("| 1. Addition                               |\n");
	printf("| 2. Subtraction                            |\n");
	printf("| 3. Multiplication                         |\n");
	printf("| 4. Divide                                 |\n");
	printf("| 5. LCM                                    |\n");
	printf("| 6. HCF                                    |\n");
	printf("| 7. Factorial                              |\n");
	printf("| 8. Square of number                       |\n");
	printf("| 9. Cube of number                         |\n");
	printf("| 10. Power Calculation                     |\n");
	printf("| 11. Check Odd and Even                    |\n");
	printf("| 12. Check Prime Number                    |\n");
	printf("| 13. Exit                                  |\n");
	printf("+-------------------------------------------+\n");
}

int main()
{
	int choose;
	printf("+-------------------------------------------+\n");
    printf("|         RiseX Advanced Calculator         |\n");
    printf("+-------------------------------------------+\n");
	printf("\n");
	printf("Welcome to RiseX Advance Calculator!");
	printf("\n");
	
	// Logic for Menu; It will work until user press 13 Exit button
	
	while(1){
		displaymenu();
		printf(">> Choose an option from the menu (1-13): ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				printf("\n");
				Addition();
				break;
			case 2:
				printf("\n");
				Subtraction();
				break;
			case 3:
				printf("\n");
				Multiplication();
				break;
			case 4:
				printf("\n");
				Divide();
				break;
			case 5:
				printf("\n");
				LCM();
				break;
			case 6:
				printf("\n");
				HCF();
				break;
			case 7:
				printf("\n");
				Factorial();
				break;
			case 8:
				printf("\n");
				Square();
				break;	
			case 9:
				printf("\n");
				Cube();
				break;
			case 10:
				printf("\n");
				Power();
				break;
			case 11:
				printf("\n");
				odd_even();
				break;
			case 12:
				printf("\n");
				prime();
				break;
			case 13:
				printf("\n");
				printf("Exisiting the RiseX Calculator, Thank you for using our service! See you again Sir!\n");
				printf("(C) 2025 Yuvraj Kumar Singh (RiseX). All rights reserved.");
				return 0;
			default:
				printf("ERROR: You entered an invalid option. Please choose a menu option from 1 to 13 Sir!\n");
		}
		printf("\n-------------------------------------------\n");
		printf("Press Enter to continue...");
		while(getchar() != '\n'); // Clear input buffer
		getchar(); // Wait for user to press Enter
	}
	return 0;
}

//Function Define for operation
void Addition(){
	float a, b;
	printf("\n-----------------Addition------------------\n");
	printf("Enter the value of First Number: ");
	scanf("%f", &a);
	printf("Enter the value of Second Number: ");
	scanf("%f", &b);
	printf("Result: %.2f + %.2f is: %.2f", a, b, a+b);
	return;
}

void Subtraction(){
	float a, b;
	printf("\n----------------Subtraction-----------------\n");
	printf("Enter the value of First Number: ");
	scanf("%f", &a);
	printf("Enter the value of Second Number: ");
	scanf("%f", &b);
	printf("Result: %.2f - %.2f is: %.2f", a, b, a-b);
	return;
}

void Multiplication(){
	float a, b;
	printf("\n----------------Multiplication---------------\n");
	printf("Enter the value of First Number: ");
	scanf("%f", &a);
	printf("Enter the value of Second Number: ");
	scanf("%f", &b);
	printf("Result: %.2f x %.2f is: %.2f", a, b, a*b);
	return;
}

void Divide(){
	printf("\n-------------------Divide--------------------\n");
	float a, b;
	printf("Enter the value of First Number: ");
	scanf("%f", &a);
	//loop will run until user enter value of b greater than zero
	while(1){
		printf("Enter the value of Second Number: ");
	    scanf("%f", &b);
	    if(b==0){
	    	printf("Error! Please Enter the number greater than zero\n");
		} else break;
	}
	printf("Result: %.2f / %.2f is: %.2f", a, b, a/b);
	return;
}

void LCM(){
	int a, b, lcm;
	printf("\n----------------LCM Calculation---------------\n");
	printf("Enter the value of First Number: ");
	scanf("%d", &a);
	printf("Enter the value of Second Number: ");
	scanf("%d", &b);
	
	if(a>=b){
		lcm=a;
	} else{
	    lcm=b;
	} 
	
	while(1){
		if(lcm%a==0 && lcm%b==0){
			printf("Result: LCM of %d and %d is: %d", a, b, lcm);
			break;
		}
		lcm++;
	}
}

void HCF(){
	int a, b, hcf, i;
	printf("\n---------------HCF Calculation---------------\n");
	printf("Enter the value of First Number: ");
	scanf("%d", &a);
	printf("Enter the value of Second Number: ");
	scanf("%d", &b);
	
	for(i=1; i<=a && i<=b; i++){
		if(a%i==0 && b%i==0){
		hcf=i;
	}
  }
  printf("Result: HCF of %d and %d is: %d", a, b, hcf);
  return;
}

void Factorial(){
	int a, i, fact=1;
	printf("\n----------------Factorial-----------------\n");
	printf("Enter the value of Number: ");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		fact*=i;
	}
	printf("Result: Factorial of %d is: %d", a, fact);
	return;
}

void Square(){
	int a;
	printf("\n--------------Square of number---------------\n");
	printf("Enter the value of Number: ");
	scanf("%d", &a);
	printf("Result: Square of %d^2 is: %d", a, a*a);
	return;
}

void Cube(){
	int a;
	printf("\n---------------Cube of number----------------\n");
	printf("Enter the value of Number: ");
	scanf("%d", &a);
	printf("Result: Cube of %d^3 is: %d", a, a*a*a);
	return;
}

void Power(){
	int a, b, power=1, i;
	printf("\n---------------Power Calculation---------------\n");
	printf("Enter the value of Base: ");
	scanf("%d", &a);
	printf("Enter the value of Power: ");
	scanf("%d", &b);
	
	for(i=1; i<=b; i++){
		power=power*a;
	}
	printf("Result: %d^%d is: %d", a, b, power);
}

void odd_even(){
	int a;
	printf("\n--------------Check Odd and Even--------------\n");
	printf("Enter the value of Number: ");
	scanf("%d", &a);
	if(a%2==0){
		printf("The given number %d is Even!", a);
	} else {
		printf("The given number %d is Odd!", a);
	}
	return;
}

void prime(){
	int a, prime=0, i=2;
	printf("\n--------------Check Prime number-------------\n");
	printf("Enter the value of Number: ");
	scanf("%d", &a);
	
	if(a<=0){
		printf("The prime number is not possible for the given number %d\n", a);
		return 0;
	} else if(a==1){
		prime=1;
	} else {
		while(i<a){
			if(a%i==0){
				prime=1;
				break;
			}
			i++;
		}
	}
	
	if(prime==1){
		printf("Result: %d is not prime number", a);
	} else{
		printf("Result: %d is prime number", a);
	}
}
