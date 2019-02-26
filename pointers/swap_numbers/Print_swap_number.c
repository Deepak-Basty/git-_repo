

void fun_1(uint8_t *num1,uint8_t *num2)
{
  
  temp=*num1;
  *num1=*num2;
  *num2=temp;

  printf("\nNumbers before swap are: %hhd%hhd\n",*num1,*num2);

}

void print_swap()
{
     
    printf("hey print 1st number\n");
    scanf("%hhd",&variable_1);

    printf("hey print 2nd number\n");
    scanf("%hhd",&variable_2);

    printf("Numbers before swap are: %hhd%hhd\n",variable_1,variable_2);

    fun_1(&variable_1,&variable_2);

}