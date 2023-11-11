#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int booking(int ticket, int choice);
int timings(int ticket, int choice, int a, int day, int x1);
void price(int ticket, int choice, int a, int b);
void seats(int ticket, int choice, int a, int b, int p);
void overview(int men, int array1[], int lik);
void select(int mem, int seat[], int n, int p, int choice, int a, int b);
int times(int a, int day, int x1);
void flushing(int choice);

int main()
{
    int choice,d,g;

    while (1)
    {
        printf("-----MOVIE BOOKING-----\n");
        printf("1. BAGAVANTH KESARI\n");
        printf("2. LEO\n");
        printf("3. TIGER NAGESWARRAO\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Ticket price for BAGAVANTH KESARI is 100/-\n");
            g=booking(100, choice);
            break;

        case 2:
            printf("Ticket price for LEO is 150/-\n");
            g=booking(150, choice);
            break;

        case 3:
            printf("Ticket price for TIGER NAGESWARRAO is 100/-\n");
            g=booking(100, choice);
            break;

        default:
            printf("Enter the correct choice\n");
            break;
        }
        if(g==1)
        {
            printf("\nThe site will be available tommorow");
            printf("\n-----EXITING-----");
            break;
        }
        else
        {
        flushing(choice);
        printf("\nIf you want to exit enter 0");
        scanf("%d",&d);
        if(d==0)
        {
            printf("-----EXITING-----");
            break;
        }
        }
    }


    return 0;
} 

int booking(int ticket, int choice)
{
    int a;
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    int day = tm_info->tm_wday;
    int x1, i;

    switch (day) {
        case 0:
            x1=3;
            printf("3.Sunday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("4.Monday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("5.Tuesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        case 1:
            x1=4;
            printf("4.Monday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("5.Tuesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("6.Wednesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        case 2:
            x1=5;
            printf("5.Tuesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("6.Wednesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("1.Friday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        case 3:
            x1=6;
             printf("6.Wednesday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("1.Friday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("2.Saturday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        case 4:
            printf("Thursday\n");
            return 1;
            break;
        case 5:
            x1=1;
            printf("1.Friday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("2.Saturday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("3.Sunday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        case 6:
            x1=2;
            printf("2.Saturday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            for (i = 1; i <= 2; i++) 
            {
            t += 24 * 3600; 
            tm_info = localtime(&t);
            if(i==1)
            printf("3.Sunday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            else
            printf("4.Monday | Date: %d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
            }
            break;
        default:
            printf("Invalid day\n");
            break;
    }
    printf("Enter your choice:");
    scanf("%d",&a);
    int z;
    switch(a)
    {
        case 1:printf("--Friday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
        case 2:printf("--Saturday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
        case 3:printf("--Sunday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
        case 4:printf("--Monday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
        case 5:printf("--Tuesday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
        case 6:printf("--Wednesday--");
            z=timings(ticket, choice, a, day, x1);
            if(z==1)
            return 1;
            break;
    }


}

int timings(int ticket, int choice, int a, int day, int x1)
{
    int b,f,l;
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);
    f=tm_info->tm_hour;
    printf("\n__TIMINGS__\n");
    l=times(a,day,x1);
    if(l==1)
    return 1;
    stage:
    printf("Enter your choice: ");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
        if(f>12 && a==x1)
        {
        printf("--11:00--\n");
        goto stage;
        }
        else
        {
        printf("--11:00--\n");
        price(ticket, choice, a, b);
        }
        break;

    case 2:
        if(f>15 && a==x1)
        {
        printf("--2:15--\n");
        goto stage;
        }
        else
        {
        printf("--2:15--\n");
        price(ticket, choice, a, b);
        }
        break;

    case 3:
        if(f>19 && a==x1)
        {
        printf("--6:15--\n");
        goto stage;
        }
        else
        {
        printf("--6:15--\n");
        price(ticket, choice, a, b);
        }
        break;

    case 4:
        if(f>22 && a==x1  )
        {
        printf("--9:15--\n");
        goto stage;
        }
        else
        {
        printf("--9:15--\n");
        price(ticket, choice, a, b);
        }
        break;

    default:
        printf("Enter the correct choice\n");
        exit(0);
    }
}

void price(int ticket, int choice, int a, int b)
{
    int p, mem;
    printf("Enter the number of members: ");
    scanf("%d", &mem);
    p = ticket * mem;
    printf("Your total ticket price: %d\n", p);
    seats(mem, choice, a, b, p);  
}

void seats(int mem, int choice, int a, int b, int p)
{
    int i, r, c, d[10][10], tik, seat[10], count=0, k=0, j, seat_number,tik1,n=100;
   int array1[100], lik=0;
    tik = mem;
    tik1=mem;

    FILE *fpt1, *fpt2, *fpt3, *fpt4, *fpt5, *fpt6, *fpt7, *fpt8, *fpt9, *fpt10, *fpt11;
    FILE *fpt12, *fpt13, *fpt14, *fpt15, *fpt16, *fpt17, *fpt18;
    FILE *fpt19, *fpt20, *fpt21, *fpt22, *fpt23, *fpt24, *fpt25;
    FILE *fpt26, *fpt27, *fpt28, *fpt29, *fpt30, *fpt31, *fpt32;
    FILE *fpt33, *fpt34, *fpt35, *fpt36;

    if(choice==1)
    {
        if(a==1||a==4)
        {
            if(b==1)
            {
                lik=0;
                tik1=mem;
                fpt1=fopen("file1.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt1,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt1);

                fpt1=fopen("file1.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt1,"%d ",seat[i]);
                fclose(fpt1);

                fpt1=fopen("file1.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt1,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt1);
            }
            else if(b==2)
            {
                lik=0;
                tik1=mem;
                
                fpt2=fopen("file2.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt2,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt2);

                fpt2=fopen("file2.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt2,"%d ",seat[i]);
                fclose(fpt2);

                fpt2=fopen("file2.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt2,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt2);
            }
            
            else if(b==3)
            {
                lik=0;
                tik1=mem;
                
                fpt3=fopen("file3.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt3,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt3);

                fpt3=fopen("file3.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt3,"%d ",seat[i]);
                fclose(fpt3);

                fpt3=fopen("file3.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt3,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt3);
            }
            
            else if(b==4)
            {
                lik=0;
                tik1=mem;
                
                fpt4=fopen("file4.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt4,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt4);

                fpt4=fopen("file4.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt4,"%d ",seat[i]);
                fclose(fpt4);

                fpt4=fopen("file4.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt4,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt4);
            }
            
        }

        else if(a==2||a==5)
        {
            if(b==1)
            {lik=0;
                tik1=mem;
               
                fpt5=fopen("file5.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt5,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt5);

                fpt5=fopen("file5.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt5,"%d ",seat[i]);
                fclose(fpt5);

                fpt5=fopen("file5.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt5,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt5);
            }
            else if(b==2)
            {
               lik=0;
                tik1=mem;
                
                fpt6=fopen("file6.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt6,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt6);

                fpt6=fopen("file6.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt6,"%d ",seat[i]);
                fclose(fpt6);

                fpt6=fopen("file6.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt6,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt6);
            }
            
            else if(b==3)
            {
                lik=0;
                tik1=mem;
                
                fpt7=fopen("file7.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt7,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt7);

                fpt7=fopen("file7.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt7,"%d ",seat[i]);
                fclose(fpt7);

                 fpt7=fopen("file7.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt7,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt7);
            }
            
            else if(b==4)
            {
                lik=0;
                tik1=mem;
                
                fpt8=fopen("file8.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt8,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt8);
                

                fpt8=fopen("file8.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt8,"%d ",seat[i]);
                fclose(fpt8);

                fpt8=fopen("file8.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt8,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt8);
            }
        }

        else if(a==3||a==6)
        {
           if(b==1)
            {
               lik=0;
                tik1=mem;
                
                fpt9=fopen("file9.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt9,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt9);

                fpt9=fopen("file9.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt9,"%d ",seat[i]);
                fclose(fpt9);

                fpt9=fopen("file9.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt9,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt9);
            }
            else if(b==2)
            {
              lik=0;
                tik1=mem;
                
                fpt10=fopen("file10.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt10,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt10);

                fpt10=fopen("file10.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt10,"%d ",seat[i]);
                fclose(fpt10);

                fpt10=fopen("file10.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt10,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt10);
            }
            
            else if(b==3)
            {
                lik=0;
                tik1=mem;
               
                fpt11=fopen("file11.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt11,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt11);

                fpt11=fopen("file11.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt11,"%d ",seat[i]);
                fclose(fpt11);

                 fpt11=fopen("file11.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt11,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt11);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
                
                fpt12=fopen("file12.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt12,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt12);

                fpt12=fopen("file12.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt12,"%d ",seat[i]);
                fclose(fpt12);

                fpt12=fopen("file12.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt12,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt12);
            }
        }
    }




    else if(choice==2)
    {
        if(a==1||a==4)
        {
            if(b==1)
            {
                
                 lik=0;
                tik1=mem;
                
                fpt13=fopen("file13.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt13,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt13);

                fpt13=fopen("file13.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt13,"%d ",seat[i]);
                fclose(fpt13);

                fpt13=fopen("file13.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt13,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt13);
            }
            else if(b==2)
            {
               
                lik=0;
                tik1=mem;
                
                fpt14=fopen("file14.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt14,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt14);

                fpt14=fopen("file14.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt14,"%d ",seat[i]);
                fclose(fpt14);

                fpt14=fopen("file14.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt14,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt14);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
               
                fpt15=fopen("file15.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt15,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt15);

                fpt15=fopen("file15.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt15,"%d ",seat[i]);
                fclose(fpt15);

                fpt15=fopen("file15.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt15,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt15);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
                
                fpt16=fopen("file16.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt16,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt16);

                fpt16=fopen("file16.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt16,"%d ",seat[i]);
                fclose(fpt16);

                fpt16=fopen("file16.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt16,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt16);
            }
            
        }

        else if(a==2||a==5)
        {
            if(b==1)
            {
                
                lik=0;
                tik1=mem;
               
                fpt17=fopen("file17.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt17,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt17);

                fpt17=fopen("file17.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt17,"%d ",seat[i]);
                fclose(fpt17);

                fpt17=fopen("file17.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt17,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt17);
            }
            else if(b==2)
            {
                
                lik=0;
                tik1=mem;
                
                fpt18=fopen("file18.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt18,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt18);

                fpt18=fopen("file18.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt18,"%d ",seat[i]);
                fclose(fpt18);

                fpt18=fopen("file18.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt18,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt18);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
               
                fpt19=fopen("file19.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt19,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt19);

                fpt19=fopen("file19.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt19,"%d ",seat[i]);
                fclose(fpt19);

                fpt19=fopen("file19.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt19,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt19);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
               
                fpt20=fopen("file20.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt20,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt20);

                fpt20=fopen("file20.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt20,"%d ",seat[i]);
                fclose(fpt20);

                fpt20=fopen("file20.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt20,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt20);
            }
        }

        else if(a==3||a==5)
        {
           if(b==1)
            {
                
                lik=0;
                tik1=mem;
               
                fpt21=fopen("file21.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt21,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt21);

                fpt21=fopen("file21.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt21,"%d ",seat[i]);
                fclose(fpt21);

                fpt21=fopen("file21.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt21,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt21);
            }
            else if(b==2)
            {
                
                lik=0;
                tik1=mem;
               
                fpt22=fopen("file22.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt22,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt22);
                fpt22=fopen("file22.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                fprintf(fpt22,"%d ",seat[i]);
                fclose(fpt22);

                 fpt22=fopen("file22.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt22,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt22);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
               
                fpt23=fopen("file23.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt23,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt23);

                fpt23=fopen("file23.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt23,"%d ",seat[i]);
                fclose(fpt23);

                fpt23=fopen("file23.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt23,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt23);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
                
                fpt24=fopen("file24.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt24,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt24);

                fpt24=fopen("file24.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt24,"%d ",seat[i]);
                fclose(fpt24);

                fpt24=fopen("file24.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt24,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt24);
            }
        }
    }


    else if(choice==3)
    {
        if(a==1||a==4)
        {
            if(b==1)
            {
                
                lik=0;
                tik1=mem;
                
                fpt25=fopen("file25.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt25,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt25);

                fpt25=fopen("file25.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt25,"%d ",seat[i]);
                fclose(fpt25);

                fpt25=fopen("file25.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt25,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt25);
            }
            else if(b==2)
            {
                
                lik=0;
                tik1=mem;
               
                fpt26=fopen("file26.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt26,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt26);

                fpt26=fopen("file26.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt26,"%d ",seat[i]);
                fclose(fpt26);

                fpt26=fopen("file26.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt26,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt26);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
               
                fpt27=fopen("file27.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt27,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt27);

                fpt27=fopen("file27.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt27,"%d ",seat[i]);
                fclose(fpt27);

                fpt27=fopen("file27.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt27,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt27);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
               
                fpt28=fopen("file28.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt28,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt28);

                fpt28=fopen("file28.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt28,"%d ",seat[i]);
                fclose(fpt28);

                fpt28=fopen("file28.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt28,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt28);
            }
            
        }

        else if(a==2||a==5)
        {
            if(b==1)
            {
                
                lik=0;
                tik1=mem;
               
                fpt29=fopen("file29.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt29,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt29);

                fpt29=fopen("file29.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt29,"%d ",seat[i]);
                fclose(fpt29);

                fpt29=fopen("file29.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt29,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt29);
            }
            else if(b==2)
            {
                
                lik=0;
                tik1=mem;
              
                fpt30=fopen("file30.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt30,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt30);

                fpt30=fopen("file30.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt30,"%d ",seat[i]);
                fclose(fpt30);

                fpt30=fopen("file30.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt30,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt30);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
               
                fpt31=fopen("file31.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt31,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt31);

                fpt31=fopen("file31.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt31,"%d ",seat[i]);
                fclose(fpt31);

                fpt31=fopen("file31.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt31,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt31);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
               
                fpt32=fopen("file32.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt32,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt32);

                fpt32=fopen("file32.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt32,"%d ",seat[i]);
                fclose(fpt32);

                fpt32=fopen("file32.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt32,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt32);
            }
        }

        else if(a==3||a==6)
        {
           if(b==1)
            {
                
                lik=0;
                tik1=mem;
              
                fpt33=fopen("file33.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt33,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt33);

                fpt33=fopen("file33.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt33,"%d ",seat[i]);
                fclose(fpt33);

                fpt33=fopen("file33.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt33,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt33);
            }
            else if(b==2)
            {
                
                lik=0;
                tik1=mem;
              
                fpt34=fopen("file34.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt34,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt34);

                fpt34=fopen("file34.txt","a");
                 select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt34,"%d ",seat[i]);
                fclose(fpt34);

                fpt34=fopen("file34.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt34,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt34);
            }
            
            else if(b==3)
            {
                
                lik=0;
                tik1=mem;
              
                fpt35=fopen("file35.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt35,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt35);

                fpt35=fopen("file35.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt35,"%d ",seat[i]);
                fclose(fpt35);

                 fpt35=fopen("file35.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt35,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt35);
            }
            
            else if(b==4)
            {
                
                lik=0;
                tik1=mem;
               
                fpt36=fopen("file36.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt36,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt36);

                fpt36=fopen("file36.txt","a");
                select(mem,seat,10,p,choice,a,b);
                for(i=0;i<tik1;i++)
                fprintf(fpt36,"%d ",seat[i]);
                fclose(fpt36);

                fpt36=fopen("file36.txt","r");
                for(i=0;i<200;i++)
                {
                    if(fscanf(fpt36,"%d ",&array1[i])==EOF)
                    break;
        
                    lik++;
                }
                overview(mem,array1,lik);
                fclose(fpt36);
            }
        }
    }


}


void overview(int men, int array1[], int lik)
{
    int seat_number, i, j, k;
    printf("\n--------------------------------------------\n");

    for (i=1; i<=10;i++)
    {
        printf("||");
        for (j=1;j<=10;j++)
        {
            seat_number=(i-1)*10+j;
            int occupied=0;
            for (k=0; k<lik; k++)
            {
                if (array1[k] == seat_number)
                {
                    occupied = 1;
                    break;
                }
            }
            if (occupied)
                printf("X   ");
            else
            {
                if (seat_number <= 9 && seat_number > 0)
                    printf("0%d  ", seat_number);
                else
                    printf("%d  ", seat_number);
            }
        }
        printf(" ||");
        printf("\n"); 
    }
    printf("       __________SCREEN__________\n");
    printf("--------------------------------------------\n");
}

void select(int mem, int seat[], int n, int p, int choice, int a, int b)
{
    int r, c, count = 0, i, tik, k = 0, j=0;
    tik = mem;
    int tik2=mem;
    printf("--SELECT THE SEATS YOU WANT--\n");
    while (tik!=0)
    {
        jump:
        printf("Enter the row and column (1-10): ");
        scanf("%d %d", &r, &c);
        count = (r - 1) * 10 + c;
        seat[k] = count;
        k++;
        tik--;
    }
    for (i=0;i<mem;i++)
    {
        printf("The selected seat no. is: %d\n", seat[i]);
    }

    printf("\n|----------------------|\n");
    printf("|------AMB CINEMAS-----|\n");
    for(i=0;i<tik2;i++)
    {
        if(seat[i]<=9)
        printf("|-----SEATS No:%d-------|\n",seat[i]);
        else if(seat[i]>=10 && seat[i]<=99)
        printf("|-----SEATS No:%d------|\n",seat[i]);
        else
        printf("|-----SEATS No:%d-----|\n",seat[i]);

    }
    printf("|-------COST:%d-------|\n",p);
    if(choice==1)
     printf("|-------SCREEN-1-------|\n");
    else if(choice==2)
     printf("|-------SCREEN-2-------|\n");
    else if(choice==3)
     printf("|-------SCREEN-3-------|\n");
    if(a==1)
    printf("|---------TODAY--------|\n");
    else if(a==2)
    printf("|-------TOMORROW-------|\n");
    else if(a==3)
    printf("|---DAY AFTER TOMOROW--|\n");

    printf("|---------TIME---------|\n");
    if(b==1)
    printf("|--------11:00---------|\n");
    else if(b==2)
    printf("|----------2:15--------|\n");
    else if(b==3)
    printf("|----------6:15--------|\n");
    else if(b==4)
    printf("|----------9:15--------|\n");

    printf("|------------mb screens|\n");
    printf("|----------------------|\n");
}

int times(int a, int day, int x1)
{
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);
    printf("Current Time: %02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
    if(a==x1)
    {
    if(tm_info->tm_hour<12)
    printf("1. 11:00\n");

    if(tm_info->tm_hour<15)
    printf("2. 2:15\n");

    if(tm_info->tm_hour<19)
    printf("3. 6:15\n");

    if(tm_info->tm_hour<22)
    printf("4. 9:15\n");

    if(tm_info->tm_hour>22)
    {
    printf("--The session is closed--");
    return 1;
    }
    }

    else
    {
        printf("1. 11:00\n2. 2:15\n3. 6:15\n4. 9:15\n");
    }
}

void flushing(int choice)
{
    int temp=0;

    FILE *fpt1, *fpt2, *fpt3, *fpt4, *fpt5, *fpt6, *fpt7, *fpt8, *fpt9, *fpt10, *fpt11;
    FILE *fpt12, *fpt13, *fpt14, *fpt15, *fpt16, *fpt17, *fpt18;
    FILE *fpt19, *fpt20, *fpt21, *fpt22, *fpt23, *fpt24, *fpt25;
    FILE *fpt26, *fpt27, *fpt28, *fpt29, *fpt30, *fpt31, *fpt32;
    FILE *fpt33, *fpt34, *fpt35, *fpt36;

    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    int day = tm_info->tm_wday;
    int x=tm_info->tm_hour;
    int y=tm_info->tm_mon + 1;

    switch (day) 
    {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
    if(choice==1)
    {
        if(day==5||day==1||day==6||day==2)
        {
            if(x>11)
            {
                fpt1=fopen("file1.txt","w");
                fflush(fpt1);
                fclose(fpt1);
            }
            if(x>14)
            {
                fpt2=fopen("file2.txt","w");
                fflush(fpt2);
                fclose(fpt2);
            }
            if(x>18)
            {
                fpt3=fopen("file3.txt","w");
                fflush(fpt3);
                fclose(fpt3);
            }
            if(x<22 && (day==6 || day==2))
            {
                fpt4=fopen("file4.txt","w");
                fflush(fpt4);
                fclose(fpt4);
            }

        }
        if(day==6||day==2||day==0||day==3)
        {
            if(x>11)
            {
                fpt5=fopen("file5.txt","w");
                fflush(fpt5);
                fclose(fpt5);
            }
            if(x>14)
            {
                fpt6=fopen("file6.txt","w");
                fflush(fpt6);
                fclose(fpt6);
            }
            if(x>18)
            {
                fpt7=fopen("file7.txt","w");
                fflush(fpt7);
                fclose(fpt7);
            }
            if(x<22 && (day==0 || day==3))
            {
                fpt8=fopen("file8.txt","w");
                fflush(fpt8);
                fclose(fpt8);
            }

        }
        if(day==0||day==3||day==1||day==4)
        {
            if(x>11)
            {
                fpt9=fopen("file9.txt","w");
                fflush(fpt9);
                fclose(fpt9);
            }
            if(x>14)
            {
                fpt10=fopen("file10.txt","w");
                fflush(fpt10);
                fclose(fpt10);
            }
            if(x>18)
            {
                fpt11=fopen("file11.txt","w");
                fflush(fpt11);
                fclose(fpt11);
            }
            if(x<22 && (day==1 || day==4))
            {
                fpt12=fopen("file12.txt","w");
                fflush(fpt12);
                fclose(fpt12);
            }

        }
    }

    else if(choice==2)
    {
        if(day==5||day==1||day==6||day==2)
        {
            if(x>11)
            {
                fpt13=fopen("file13.txt","w");
                fflush(fpt13);
                fclose(fpt13);
            }
            if(x>14)
            {
                fpt14=fopen("file14.txt","w");
                fflush(fpt14);
                fclose(fpt14);
            }
            if(x>18)
            {
                fpt15=fopen("file15.txt","w");
                fflush(fpt15);
                fclose(fpt15);
            }
            if(x<22 && (day==6 || day==2))
            {
                fpt16=fopen("file16.txt","w");
                fflush(fpt16);
                fclose(fpt16);
            }

        }
        if(day==6||day==2||day==0||day==3)
        {
            if(x>11)
            {
                fpt17=fopen("file17.txt","w");
                fflush(fpt17);
                fclose(fpt17);
            }
            if(x>14)
            {
                fpt18=fopen("file18.txt","w");
                fflush(fpt18);
                fclose(fpt18);
            }
            if(x>18)
            {
                fpt19=fopen("file19.txt","w");
                fflush(fpt19);
                fclose(fpt19);
            }
            if(x<22 && (day==0 || day==3))
            {
                fpt20=fopen("file20.txt","w");
                fflush(fpt20);
                fclose(fpt20);
            }

        }
        if(day==0||day==3||day==1||day==4)
        {
            if(x>11)
            {
                fpt21=fopen("file21.txt","w");
                fflush(fpt21);
                fclose(fpt21);
            }
            if(x>14)
            {
                fpt22=fopen("file22.txt","w");
                fflush(fpt22);
                fclose(fpt22);
            }
            if(x>18)
            {
                fpt23=fopen("file23.txt","w");
                fflush(fpt23);
                fclose(fpt23);
            }
            if(x<22 && (day==1 || day==4))
            {
                fpt24=fopen("file24.txt","w");
                fflush(fpt24);
                fclose(fpt24);
            }

        }
    }

    else if(choice==3)
    {
        if(day==5||day==1||day==6||day==2)
        {
            if(x>11)
            {
                fpt25=fopen("file25.txt","w");
                fflush(fpt25);
                fclose(fpt25);
            }
            if(x>14)
            {
                fpt26=fopen("file26.txt","w");
                fflush(fpt26);
                fclose(fpt26);
            }
            if(x>18)
            {
                fpt27=fopen("file27.txt","w");
                fflush(fpt27);
                fclose(fpt27);
            }
            if(x<22 && (day==6 || day==2))
            {
                fpt28=fopen("file28.txt","w");
                fflush(fpt28);
                fclose(fpt28);
            }

        }
        if(day==6||day==2||day==0||day==3)
        {
            if(x>11)
            {
                fpt29=fopen("file29.txt","w");
                fflush(fpt29);
                fclose(fpt29);
            }
            if(x>14)
            {
                fpt30=fopen("file30.txt","w");
                fflush(fpt30);
                fclose(fpt30);
            }
            if(x>18)
            {
                fpt31=fopen("file31.txt","w");
                fflush(fpt31);
                fclose(fpt31);
            }
            if(x<22 && (day==0 || day==3))
            {
	
                fpt32=fopen("file32.txt","w");
                fflush(fpt32);
                fclose(fpt32);
            }

        }
        if(day==0||day==3||day==1||day==4)
        {
            if(x>11)
            {
                fpt33=fopen("file33.txt","w");
                fflush(fpt33);
                fclose(fpt33);
            }
            if(x>14)
            {
                fpt34=fopen("file34.txt","w");
                fflush(fpt34);
                fclose(fpt34);
            }
            if(x>18)
            {
                fpt35=fopen("file35.txt","w");
                fflush(fpt35);
                fclose(fpt35);
            }
            if(x<22 && (day==1 || day==4))
            {
                fpt36=fopen("file36.txt","w");
                fflush(fpt36);
                fclose(fpt36);
            }
        }
    }
}