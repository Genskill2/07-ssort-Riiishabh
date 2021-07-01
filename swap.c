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
