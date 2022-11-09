#include<stdio.h>
void mon()
{
    printf("monday order 1");
}
void tue()
{
    printf("tueday order 2");
}
void wed()
{
    printf("wedday order 3");
}
void thu()
{
    printf("day order 4");
}
void fri()
{
    printf("friday order 5");
}
int main()
{
    void (*fun_ptr_arr[])()={mon,tue,wed,thu,fri};
    printf("enter the choice=0 for mon,1 for tue,2 for wed,3 for thu,4 for fri \n");

    int ch;
    scanf("%d",&ch);
    if(ch>5)
    return 0;
    (*fun_ptr_arr[ch])();
    return 0;
    
}