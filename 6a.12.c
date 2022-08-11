#include<stdio.h>
int main()
{
int temp;
printf("\n enter the temperature");
scanf("%d",&temp);
if(temp<0)
printf("\n freezing weather");

else if (temp>0&&temp<10)
printf("\n very cold weather");

else if (temp>10&&temp<20)
printf("\n cold weather");

else if (temp>20&&temp<30)
printf("\n normal in temp");

else if (temp>30&&temp<40)
printf("\n hot weather");

else
printf("\n very hot");
return 0;


}
