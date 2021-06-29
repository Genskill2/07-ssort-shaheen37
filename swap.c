void swap_max(int array[], int length, int n)
{
    int largest = n;
    for(int i=n;i<length;i++)
    {
        if(array[i]>array[largest])
        {
            largest=i;
        }
    }
    int temp=array[largest];
    array[largest]= array[n];
    array[n]=temp;
}


void ssort(int array[], int length)
{
  for(int i=0;i<length-1;i++)
  {
    swap_max(array,length, i);
  }
}
