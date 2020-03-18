#include<stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  while (t!=0)
  {
    t--;
    long int n,p;
    scanf("%ld %ld",&n,&p);
    char s[n+1];
    int a[n],ind=0;
    scanf("%s",s);
    for (int i = 0; s[i] != '\0'; i++)
    {
      if(s[i] == 'b')
      {
        a[ind]=i;
        i++;
      }
      
    }
    
  }
  
}