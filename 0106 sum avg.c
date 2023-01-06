#include <stdio.h>
#define STUDENTS 10
int main(void)
{
	int i, num[10], kor[10], eng[10], math[10], sum[10], mini;
	double avg[10];
	
	for(i=0;i<10;i++){
		printf("%d번 학생의 국어, 영어, 수학 점수를 입력하세요:\n", i+1);
		scanf("%d %d %d", &kor[i], &eng[i], &math[i]);
		
		sum[i]=kor[i]+eng[i]+math[i];
		avg[i]=sum[i]/3.0;
}
	puts("");
	puts("");
		printf("학번  국어  영어  수학  총점  평균\n");
	    printf("________________________________________________");
	
	for(i=0;i<10;i++){
		printf("\n%3d %6d %5d %5d %5d  %0.1f\n", i+1,kor[i], eng[i], math[i], sum[i], avg[i]);
	}
	return 0;
}
		