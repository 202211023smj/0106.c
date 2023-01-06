#include <stdio.h>

int main(void) {
  int ctr;
  int student;
  int math, kor, eng ; //math는 수학, kor은 국어, eng은 영어
  float avg; //avg는 평균
  float sum;
  int rank, max;
  int *pkor, *pmath, *peng, *prank;
  float *pavg;
  
   do {
    printf("평균 계산기를 실행할 학생 수 입력(1명이상) : ");
    scanf("%d", &student);
    
    printf("\n");
   } while (student < 1);

  pkor = (int *)malloc(sizeof(int) * student);
  pmath = (int *)malloc(sizeof(int) * student);
  peng = (int *)malloc(sizeof(int) * student);
  pavg = (float *)malloc(sizeof(float) * student);
  prank = (int *)malloc(sizeof(int) * student);

  
  for (ctr = 1; ctr <= student; ctr++) {
    printf("\n***학생%d***\n", ctr);
    
    printf("국어 점수 입력: ");
    scanf("%d", &kor);
    
    printf("수학 점수 입력: ");
       scanf("%d", &math);
    
    printf("영어 점수 입력: ");
    scanf("%d", &eng);
    
    sum = kor + eng + math;
    avg = sum / 3.0;
    
    pkor[ctr-1] = kor;
    pmath[ctr-1] = math;
    peng[ctr-1] = eng;
    pavg[ctr-1] = avg;
    prank[ctr-1] = ctr-1;
  
    int temp = 0;
    for (int i=ctr-1; i>0; i--){
      for (int j=0; j<i; j++){
        if (pavg[prank[j]]<pavg[prank[j+1]]){
          temp = prank[j];
          prank[j] = prank[j+1];
          prank[j+1] = temp;
        }
      }
    }

    printf("학생%d의 국영수 평균은 %.1f입니다.\n", ctr, avg);
    
    printf("\n***********\n");
  }
  printf("학생 %d명의 평균 계산 프로그램 종료\n", student);
  
  printf("----- 전체정보 요약-----\n");
  printf("Rank. \tStudentNo. \t 국어 \t 수학 \t 영어 \t 평균\n");
  for (ctr = 1; ctr <= student; ctr++) {

    printf("%d. \t\t[%d]. \t\t %d \t %d \t %d \t %f \n", ctr,prank[ctr-1]+1, pkor[prank[ctr-1]],pmath[prank[ctr-1]],peng[prank[ctr-1]],pavg[prank[ctr-1]]);
  }
  
   
  return 0;
 }