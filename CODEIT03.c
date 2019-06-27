#include<stdio.h>
int main()
{
        unsigned long long int t,i,day,month,year,total_days,Y,M;
        scanf("%llu",&t);
        while(t--)
        {
                int arr[13];
                arr[1]=31,arr[2]=28,arr[3]=31,arr[4]=30,arr[5]=31,arr[6]=30,arr[7]=31,arr[8]=31,arr[9]=30,arr[10]=31,arr[11]=30,arr[12]=31;
                total_days=0;
                scanf("%llu %llu %llu",&day,&month,&year);
                Y=1900,M=1;
                if(year>1900)
                {
                        while(Y<year)
                        {
                        if((Y%4==0&&Y%100!=0)||Y%400==0)
                        {
                                total_days+=366;
                        }
                        else{
                                total_days+=365;
                        }
                        Y=Y+1;
                        }
                }
                        if(month>1){
                        for(M=1;M<month;M++)
                        {
                                if(M==2)
                                {
                                if((Y%4==0&&Y%100!=0)||Y%400==0){
                                total_days+=29;
                                }
                                }
                                else
                                total_days+=arr[M];
                        }
                        }
                        total_days+=day;
                    
                        i=total_days%7;
                
                        if(i==0)
                                printf("Sunday\n");
                        if(i==1)
                                printf("Monday\n");
                        if(i==2)
                                printf("Tuesday\n");
                        if(i==3)
                                printf("Wednesday\n");
                        if(i==4)
                                printf("Thursday\n");
                        if(i==5)
                                printf("Friday\n");
        				if(i==6)
                                printf("Saturday\n");	
		}
        return 0;
}
