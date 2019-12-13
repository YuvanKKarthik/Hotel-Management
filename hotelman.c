#include<stdio.h>
#include<conio.h>
void list();
void order(char fo[],char ho[],int q,int p);
void det(char e[],long m,char ad[]);
void main()
{
char e[10][20],p[10][20],ad[10][20];
char em[20],ps[20];
long mn;
long m[20];
char a[20];
int i=1,j,c,o=0,d=0,t=0,k=1;
clrscr();
printf("\t\tZOMATO");
do{
printf("\n1.Login\n2.Signin");
scanf("%d",&c);
switch(c)
{
case 1:
{
printf("Email:");
scanf("%s",&em);
printf("Password:");
scanf("%s",&ps);
for(i=1;i<=d;i++)
{
o=0,t=0;
if(strcmp(em,e[i])==0)
o++;
if(strcmp(ps,p[i])==0)
t++;
}
if((o==1)&&(t==1))
{
printf("Login Successfull");
list();
det(e[k],m[k],ad[k]);
k++;
}
if((o==0)||(t==0))
printf("Invalid Username or Password");
break;
}
case 2:
{
printf("Email:");
scanf("%s",&em);
strcpy(e[i],em);
printf("Password:");
scanf("%s",&ps);
strcpy(p[i],ps);
printf("Mobile Number:");
scanf("%ld",&mn);
m[i]=mn;
printf("Address:");
scanf("%s",&a);
strcpy(ad[i],a);
printf("Registration Successfull");
i++;
d++;
break;
}}}
while(c<=2);
getch();
}
void list()
{
int op,pri,i,q;
int ch,ch1,ch2,ch3;
char fo[10][20]={"Biriyani","Chilly Parotta","Thandoori","Naan"};
char ho[10][20]={"Bhaai Hotel","Venu Biriyani","Thalapakatti","Araffa"};
clrscr();
printf("\t\tMENU\n");
for(i=0;i<4;i++)
{
printf("%d.%s\n",i+1,fo[i]);
}
printf("Enter the item number");
scanf("%d",&op);
switch(op)
{
case 1:
{
printf("\t\tBiriyani-Special Hotels\n");
for(i=0;i<4;i++)
{
printf("%d.%s\n",i+1,ho[i]);
}
printf("Enter the hotel number\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*120;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 2:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*100;

order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 3:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*90;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 4:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*150;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
}
break;
}
case 2:
{
printf("\t\tChilli Paroota-Special Hotels\n");
for(i=0;i<4;i++)
printf("%d.%s\n",i+1,ho[i]);
printf("Enter the hotel number\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*100;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 2:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*150;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 3:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*110;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 4:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*120;
order(fo[op-1],ho[ch-1],q,pri);
break;
}}
break;
}
case 3:
{
printf("\t\tThandoori-Special Hotels\n");
for(i=0;i<4;i++)
printf("%d.%s\n",i+1,ho[i]);
printf("Enter the hotel number\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*150;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 2:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*200;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 3:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*140;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 4:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*100;
order(fo[op-1],ho[ch-1],q,pri);
break;
}}
break;
}
case 4:
{
printf("\t\tNaan-Special Hotels\n");
for(i=0;i<4;i++)
printf("%d.%s\n",i+1,ho[i]);
printf("Enter the hotel number\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*120;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 2:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*60;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 3:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*130;
order(fo[op-1],ho[ch-1],q,pri);
break;
}
case 4:
{
printf("Enter the quantity");
scanf("%d",&q);
pri=q*180;
order(fo[op-1],ho[ch-1],q,pri);
break;
}}
break;
}}
getch();
}
void det(char e[],long m,char ad[])
{
clrscr();
printf("\tUsername:%s\n",e);
printf("\tMobile number:%ld\n",m);
printf("\tAddress:%s\n",ad);
getch();
}
void order(char fo[],char ho[],int q,int pri)
{
clrscr();
printf("\t\t\t\tORDER PLACED\n");
printf("\t\t\t\tORDER DETAILS\n");
printf("\t\tFood:%s\n",fo);
printf("\t\tHotel:%s\n",ho);
printf("\t\tQuantity:%d\n",q);
printf("\t\tTotal price:%d\n",pri);
printf("\t\t\tThanks for ordering");
getch();
}
