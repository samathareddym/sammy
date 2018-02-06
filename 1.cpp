#include<iostream>
using namespace std;

class sort
{
	private:
	 int a[100];
	public:	
	 void read()
	   {	
		cout<<"enter the 5 of elements";
		for(int i=0;i<5;i++)
		    cin>>a[i];
	    }
	
       void display()
	   {	
		cout<<"Original Array :\n";
		for(int i=0;i<5;i++)
		    cout<<a[i];
	    }
      void insertionsort()
       {
            int i, key, j,n=5;
       for (i = 1; i < n; i++)
  {
       key = a[i];
       j = i-1;
        while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
 
          }
	void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[],int l,int r)
{
    if (l < r)
    {
      
        int m = l+(r-l)/2;
 
        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void mergeSort1()
{
mergeSort(a,0,4);
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}
 


void quickSort1()
{ 
quick_sort(a,0,4);
}

};
int main()
{
  sort ob1;
  ob1.read();
 //ob1.display();
  //ob1.insertionsort();
  //ob1.display();
 // ob1.read();
 // ob1.display();
  //ob1.mergeSort1();
  //ob1.display();
  //ob1.read();
  ob1.display();
  ob1.quickSort1();
  ob1.display();
}

