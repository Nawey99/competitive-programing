class Solution
{
    public:
    int select(int arr[], int i)
    {
        
        // code here such that selectionSort() sorts arr[]
        selectionSort(arr,i);
    }
     
    void selectionSort(int arr[], int n)
    {
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(arr[j]<arr[i])
              swap(arr[i],arr[j]);
          }
      }
    }
    
};