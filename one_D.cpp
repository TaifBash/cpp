#include <iostream>
#include <stdio.h>

using namespace std;

void fillArray_1D(int array[], int size) 
{
    for(int i = 0; i < size; i++)
    {
        array[i] =(rand() % 100);
          
    }// end for
}//end 

   
void printArray_1D(int array[], int n)
{
      for(int i=0; i<n; i++)
      {
      cout<<array[i]<<" ";
      cout<<endl;
      }
      cout<<"";

}//end m 

double avrage(int array[] , int n)
{
    double sum = 0;
    double avg = 0;
    int count = 0;
    
    while (count < n)
    {
        sum += array[count];
        count ++;
          
    }//while
        
    avg = sum / n;
    cout<<"\nThe avrage of elements of all the array is: "<<avg;
    
    return avg;
}// end m



void belowAboveAvrage(int array[], int n)
{
          double avg = avrage(array,n);//average
          int below=0;
          int above=0;
          
          for(int i = 0; i < n; i++)
        {
              if (array[i] > avg)
                    {
                        above++;
                    }
                  
             else if (array[i] < avg)
                      {
                          below++;
                      }
                
        }//end if and for
              
          cout<<"\nNumber of elements above avrage is: "<<above;
         
          cout<<"\nElements above the average are as follows: \n";
          
          for(int i = 0; i < n; i++)
          {
              if(array[i] > avg)
              {
                  cout<<array[i]<<"";
                    
              }//end if
          cout<<endl;
                
          } //end for
      
        
          cout<<"Number of elements below avrage "<<below;

          cout<<"\nElements below the avrage: ";
          for(int i = 0 ; i < n; i++)
          {
                    if(array[i] < avg)
                    {
                        cout<<array[i]<<endl;
                    }//end if
          }//end for
}
 
 void swapLargestSmallest(int arr[], int n)
 {    
    int sml = arr[0];
    int lrg= arr[0];
  
    for(int i=0; i<n; i++)
  {      
        if(arr[i]>lrg)
              {
                  lrg=arr[i];
              }
            
        if(arr[i]<sml)
              {
                  sml=arr[i];
              } 
              cout<<endl;
  }
    cout<<"Largest element is: "<<lrg;// print Smallest
    cout<<endl;
    cout<<"Smallest element is: "<<sml;//printLargest
}// end method
     


int main()
{

    int test1d[3];//array
    
    fillArray_1D(test1d,3);
    
    cout<< "\n[1D]\n\n";
      //print array
    printArray_1D(test1d,3);
      //calculate avrage of elements 
    belowAboveAvrage(test1d, 3);
      // awap for Largest and Smallest element in array
    swapLargestSmallest(test1d,3);
    
    return 0;
}

