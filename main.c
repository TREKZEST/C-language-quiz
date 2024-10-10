#include<stdio.h>
int main(void)
{
	int i;
	int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
	int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
	int wrong1,wrong2,wrong3,wrong4,wrong5,wrong6,wrong7,wrong8,wrong9,wrong10;
	int total;
	printf("\t\t\t C Programming Mini Project Quiz Game");
	printf("\t\t\t\t\t\t\t Welcome \n\t\t\t\t   to \n\t\t\t\t Quiz Game\n\n");
	printf("________________________________________________________________________________");
	printf("________________________________________________________________________________");
	printf("> Press 7 to Start the Quiz\n");
	printf("> Press 0 to Quit the Quiz");
	scanf("\n%d",&i);
	if(i==7)
	{
		printf("The Quiz has Started (:\n\n)");
	}
	else if(i==0)
	{
		printf("The Quiz has Ended");
	}
	else
	{
		printf("Invalid Value");
	}
	if(i==7)
	{
		printf("*******************************************************************************");
		printf("1) Who is the Father of Computer ? \n\n");
		printf("1) Allen Turing \n");
		printf("2) Charles Babbage \n");
		printf("3) Simur Cray\n");
		printf("4) Augusta Adaming \n");
	}
	printf("\n\n Enter Your Answer:");
	scanf("%d",&ans1);
	if(ans1==2)
	{
		printf("________________________________________________________________________________");
		printf("Correct Answer");
		printf("\n________________________________________________________________________________");
		point1=5;printf("You have Scored %d point \n\n",point1);
		
	}
	else
	{
		printf("Wrong Answer");
		wrong1=0;
		printf("\n You have Scored %d point \n\n",wrong1);
	}
	printf("*******************************************************************************");
	printf("\t\t\t\t Second MCQS\n");
	printf("*******************************************************************************");
	printf("2) WWW Stand fot?\n\n");
	printf("1) World Whole Web\n");
	printf("2) Wide World Web\n");
	printf("3) Web World Wide\n");
	printf("4) World Wide Web\n");
	printf("Enter Your Answer:");
	scanf("%d",&ans2);
	if(ans2==4)
	{
		printf("________________________________________________________________________________");
		printf("Correct Answer\n");
		printf("\n________________________________________________________________________________");
		point2=5;
		printf("You have Scored %d Point \n\n",point2);

		
	}
else
{
	printf("Wrong Answer");
	wrong2=0;
	printf("\n You Have Scored %d point \n\n",wrong2);
	
	}
	printf("*******************************************************************************");
	printf("\t\t\t\t\t Third MCQS");
	printf("\n*******************************************************************************");
	printf("3) Gigabyte is Equal to?\n\n");
	printf("1) 1021 bits\n");
	printf("2) 1032 Megebyte\n");
	printf("3) 1024 Megabyte\n");
	printf("4) 1024 Kilobyte\n");
	printf("Enter Your Answer:");
	scanf("%d",&ans3);
	if(ans3==3)
	{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer");
		printf("\n________________________________________________________________________________");
		point3=5;
		printf("You Have Scored %d point\n\n",point3);
	}
	else
	 {
	printf("Wrong Answer");
	wrong3=0;
	printf("\n You have Scored %d point \n\n",wrong3);
		
	
}
	printf("*******************************************************************************");
	printf("\t\t\t\t Fourth MCQS\n");
		printf("\n*******************************************************************************");
		printf("4) The Brain of any Computer is?\n\n");
		printf("1) CPU\n");
		printf("2) ALU\n");
		printf("3) Control Unit\n");
		printf("4) Memory\n");
	printf("Enter Your Answer:");
	scanf("%d",&ans4);
	if(ans4==1)
	{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer\n");
		printf("\n________________________________________________________________________________");
	point4=5;
	printf("You Have Scored %d point \n\n",point4);
	
	}
else
 {
	printf("Wrong Answer");
	wrong4=0;
	printf("\n You Have Scored %d point\n\n",wrong4);
	
}	
printf("*******************************************************************************");
	printf("\t\t\t\t\t Fifth MCQS\n");
	printf("*******************************************************************************");
	
	printf("5) ALU Stands for? \n\n");
	printf("1) Array Logic Unit \n");
	printf("2) Arithametic Logic Unit\n");
	printf("3) Application Logic Unit\n");
	printf("4) None of these\n");
	
	
	printf("Enter Your Answer:");
	scanf("%d",&ans5);
	if(ans5==2)
	{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer\n");
		printf("\n________________________________________________________________________________");
		point5=5;
		printf("You Have Scored %d Point \n\n",point5);
		
	}
	
	else
	{
		printf("Wrong Answer");
		wrong5=0;
		printf("\n You Have Scored %d Point \n\n",wrong5);
	}
	printf("*******************************************************************************");
	printf("Six MCQS\n");
	printf("*******************************************************************************");
	printf("6) WAN Stands for?\n\n");
	printf("1) Wap Area Nerwork\n");
	printf("2) Wide Array Net\n");
	printf("3) Wide Area Nerwork\n");
	printf("4) Wireless Area Nerwork\n");
	
	printf("Enter Your Answer:");
	scanf("%d",&ans6);
	if(ans6==3)
	{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer \n");
		printf("\n________________________________________________________________________________");
		point6=5;
		printf("You Have Scored %d Point \n\n",point6);
		
	}
	else
	{
		printf("Wrong Answer");
		wrong6==0;
		printf("You Have Scored %d point\n\n",wrong6);
	}
	printf("*******************************************************************************");
	printf("\t\t\t\t\t Seven MCQS\n");
	printf("*******************************************************************************");
	
	printf("7) Which Device is Required for the Internet Connection\n\n");
	printf("1) Joystick\n");
	printf("2) Modem\n");
	printf("3) CD Drive\n");
	printf("4) NIC Card\n");
	
	printf("Enter Your Answer:");
	scanf("%d",&ans7);
	if(ans7==2)
	{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer\n");
		printf("\n________________________________________________________________________________");
		point7=5;
		printf("You Have Scored %d point \n\n",point7);
		
	}
	else {
		printf("Wrong Answer");
		wrong7=0;
		printf("\n You Have Scored %d Point \n\n ",wrong7);
	
	}
		printf("\n*******************************************************************************");
		printf("\t\t\t\t\t Eight MCQS\n");
			printf("\n*******************************************************************************");
			
		printf("8) Which of the Following is a Part of the Central Processing Unit?\n\n");
		
		printf("1) Printer\n");
		printf("2) Keyboard \n");
		printf("3) Arithmetic & Logic Unit\n");
		printf("4) Mouse\n");
		
		printf("Enter You Answer:");
		scanf("%d",&ans8);
		if(ans8==3)
		{
			printf("\n________________________________________________________________________________");
			printf("Correct Answer\n");
			printf("\n________________________________________________________________________________");
			point8=5;
			printf("You Have Scored %d Point \n\n",point8);
		
		}
		else
		{
			printf("Wrong Answer");
			wrong8=0;
			printf("\n You Have Scored %d Point \n\n",wrong8);
			
			
		}
		
printf("\n*******************************************************************************");
printf("\t\t\t\t\t Nine MCQS \n");
printf("\n*******************************************************************************");

printf("9) Computer Means ?\n\n");

printf("1) To Operate\n");
printf("2) To Produce \n");
printf("3) To Generate\n");
printf("4) To Calculate\n");

printf("Enter Your Answer:");
scanf("%d",&ans9);
if(ans9==4)
{
		printf("\n________________________________________________________________________________");
		printf("Correct Answer\n");
			printf("\n________________________________________________________________________________");
			point9=5;
			printf("You Have Scored %d Point \n\n",point9);
			
}
else
{
	printf("Wrong Answer");
	wrong9=0;
	printf("\n You Have Scored %d Point \n\n",wrong9);
	
	
}
printf("\n*******************************************************************************");
printf("\t\t\t\t\t Ten MCQS\n");
printf("\n*******************************************************************************");

printf("10) Which Device is a input Device?\n\n");

printf("1) Keyboard \n");
printf("2) Speaker \n");
printf("3) Headphone \n");
printf("4) Printer \n");

printf("Enter Your Answer:");
scanf("%d",&ans10);
if(ans10==1)
{

printf("\n________________________________________________________________________________");
printf("Correct Answer\n");
printf("\n________________________________________________________________________________");

point10=5;
printf("You Have Scored %d Point \n\n",point10);
}
else
{
	printf("Wrong Answer");
	wrong10=0;
	printf("\n You Have Scored %d Point \n\n",wrong10);
	
}

total=point1+point2+point3+point4+point5+point6+point7+point8+point9+point10;
printf("\n*******************************************************************************");
printf("\t\t\t\t\t\t Your Total Scored is : %d\n",total);
printf("\n*******************************************************************************");
return 0;

}