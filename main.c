#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    printf("Input an integer :");
    scanf("%d", &i);
    
    if (i > 0)
       printf("����Դϴ�.\n"); 
    else if (i < 0)
       printf("�����Դϴ�.\n"); 
    else
      printf("0 �Դϴ�.\n"); 
  
  system("PAUSE");	
  return 0;
}
