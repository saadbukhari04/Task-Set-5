#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int roll,mid,final,ses,t,i,p,c,f,total,ov,m,ff,ma,fa,s,sa,max=0,max1=0,max2=0,max3=0,min=100,min1=100,min2=100,min3=100; 
	char g;
	printf("Roll No\t\tMid\t\tFinal\t\tSessional\tTotal\t 	Grades\n");
	i = 1;
	while (i<=30){
		mid = rand() %35;
		final = rand() %40;
		ses = rand() %25;
		t = mid+final+ses;
		if(t>85){
			g = '-A';
		}
		else if(t>80 && t<=85){
			g= 'A';
		}
		else if(t>70 && t<=80){
			g= 'B';
		}
		else if(t>60 && t<=70){
			g= 'C';
		}
		else if(t>50 && t<=60){
			g= 'D';
		}
		else{
			g='F';
		}
		printf("%d		%d		%d		%d		%d		%c\n", i,mid,final,ses,t,g);
		total += t;
		m += mid;
		ff +=final;
		s += ses;
		if (final > max) max = final;
		if (mid > max1) max1 = mid;
		if (ses > max2) max2 = ses;
		if (t > max3) max3 = t;
		if (final <= min) min = final;
		if (mid < min1) min1 = mid;
		if (ses <= min2) min2 = ses;
		if (t <= min3) min3 = t;
		if(g=='F'){
			c++;
		}
		i++;
		
	}
	
		printf("Total = 30\n"); 
		printf("Pass = %d\n",c);
		f = 30-c;
		printf("Fail = %d\n",f);
		ov=total/30;
		ma = m/30;
		fa = ff/30;
		sa = s/30;
		printf("Overall Average Marks = %d\n",ov);
		printf("Mid Average Marks = %d\n",ma);
		printf("Sessional Average Marks = %d\n",sa);
		printf("Final Average Marks = %d\n",fa);
		printf("Maximum Mid Marks = %d\n", max1);
		printf("Maximum Sessional Marks = %d\n", max2);
		printf("Maximum Final Marks = %d\n", max);
		printf("Maximum Total Marks = %d\n", max3);
		printf("Minimum Mid Marks = %d\n", min1);
		printf("Minimum Sessional Marks = %d\n", min2);
		printf("Minimum Final Marks = %d\n", min);
		printf("Minimum Total Marks = %d\n", min3);
		
	return 0;
}
