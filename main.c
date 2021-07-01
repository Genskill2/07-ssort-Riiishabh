#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
string ari(string a)
{
float score;
int c=0,w=0,s=0;
for(int i=0;a[i]!='\0';++i)
{
if(isalnum(a[i]))
c++;
if(a[i]==' ')
w++;
if((a[i]=='.')||(a[i]=='!')||(a[i]=='?'))
s++;
}
score=(4.71*(float)c/(float)w)+(0.5*(float)w/(float)s)-21.43;
score=(int) ceil(score);
if(score==1)
return "Kindergarten";
 else if(score==2) 
return "First/Second Grade";
else if(score==3)
return "Third Grade";
 else if(score==4)
return "Fourth Grade";
else if(score==5)
return "Fifth Grade";
  else if(score==6)
return "Sixth Grade";
      else if(score==7)
return "Seventh Grade";
       else if(score==8)
return "Eighth Grade";
     else if(score==9)
return "Ninth Grade";
     else if(score==10)
return "Tenth Grade";
      else if(score==11)
return "Eleventh Grade";
       else if(score==12)
return "Twelfth grade";
else if(score==13)
return "College student";
     else
return "Professor";
       
 }
void swap_max(int arr[], int l, int n)
{
int j,temp;
int max=arr[n];
j=n;
for(int i=(n+1);i<l;i++)
{
if(arr[i]>max)
{
max=arr[i];
j=i;
}
}
temp=arr[j];
arr[j]=arr[n];
arr[n]=temp;
}
void ssort(int arr[], int l)
{
for(int i=0;i<l;++i)
swap_max(arr,l,i);
}
void ssort(int [], int);

void print(int t[], int l) {
  for (int i = 0; i<l; i++) {
    printf("%2i ", t[i]);
    }
  printf("\n");
}

void compare(int l1[], int l2[], int l) {
  for (int i=0; i<l; i++) {
    if (l1[i] != l2[i]) {
      printf("Error in index %i\n", i);
      printf("Expected : ");
      print(l2, l);
      printf("Actual   : ");
      print(l1, l);
      abort();
    }
  }
}

void test_swap_max() {
  int l[] = {10, 4, 6, 2, 7, 3, 15, 8};
  printf("Checking position 0\n"); swap_max(l, 8, 0); int t0[]={15, 4, 6, 2, 7, 3, 10, 8}; compare(l, t0, 8);
  printf("Checking position 1\n"); swap_max(l, 8, 1); int t1[]={15, 10, 6, 2, 7, 3, 4, 8}; compare(l, t1, 8);
  printf("Checking position 2\n"); swap_max(l, 8, 2); int t2[]={15, 10, 8, 2, 7, 3, 4, 6}; compare(l, t2, 8);
  printf("Checking position 3\n"); swap_max(l, 8, 3); int t3[]={15, 10, 8, 7, 2, 3, 4, 6}; compare(l, t3, 8);
  printf("Checking position 4\n"); swap_max(l, 8, 4); int t4[]={15, 10, 8, 7, 6, 3, 4, 2}; compare(l, t4, 8);
  printf("Checking position 5\n"); swap_max(l, 8, 5); int t5[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t5, 8);
  printf("Checking position 6\n"); swap_max(l, 8, 6); int t6[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t6, 8);
  printf("Checking position 7\n"); swap_max(l, 8, 7); int t7[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t7, 8);
};

void test_ssort() {
  printf("Testing sorting\n");
  int arr[] = {5, 13, 76, -4, 12, 120, 23, 14, 11, 9, 7};
  int sorted[] = {120, 76, 23, 14, 13, 12, 11, 9, 7, 5, -4};
  ssort(arr, 11);
  compare(arr, sorted, 11);

  }

int main(void) {
  test_swap_max();
  test_ssort();
  }

