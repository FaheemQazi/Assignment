#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>

#include <string.h>

//#include <sys/wait.h>

int main()
{
    int status,status1,status2,status3,status4,status5,status6,status7,status8,status9;
    int sum=0;
        int cpid1=fork();
        for(int i=1;i<=100;i++)
        {
                sum=sum+i;
        }
        if(cpid1==0)
        {
            printf("child1;\n");
        }
        else
        {
            for(int i=101;i<=200;i++)
            {
                sum=sum+i;
            }
            int cpid2=fork();
            if(cpid2==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid3=fork();
            for(int i=201;i<=300;i++)
            {
                sum=sum+i;
            }
         if(cpid3==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid4=fork();
            for(int i=301;i<=400;i++)
            {
                sum=sum+i;
            }
         if(cpid4==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid5=fork();
            for(int i=401;i<=500;i++)
            {
                sum=sum+i;
            }
         if(cpid5==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid6=fork();
            for(int i=501;i<=600;i++)
            {
                sum=sum+i;
            }
         if(cpid6==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid7=fork();
            for(int i=601;i<=700;i++)
            {
                sum=sum+i;
            }
         if(cpid7==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid8=fork();
            for(int i=701;i<=800;i++)
            {
                sum=sum+i;
            }
         if(cpid8==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid9=fork();
            for(int i=801;i<=900;i++)
            {
                sum=sum+i;
            }
         if(cpid9==0)
        {
            printf("child1;\n");
        }
        else
        {
            int cpid10=fork();
            for(int i=901;i<=1000;i++)
            {
                sum=sum+i;
            }
            wait(&status);
            wait(&status1);
            wait(&status2);
            wait(&status3);
            wait(&status4);
            wait(&status5);
            wait(&status6);
            wait(&status7);
            wait(&status8);
            wait(&status9);
            printf("Sum=", sum);
        }
        }
        }
        }
        }
        }
        }
        }
        }



    printf("Hello world!\n");
    return 0;
}
