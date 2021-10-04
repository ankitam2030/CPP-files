#include <iostream>
using namespace std;
class Factorial{
    public: 
    int min,max;
    void getData(){
        cout<<"Enter the min value of range: "<<endl;
        cin>>min;
        cout<<"Enter the max value of range: "<<endl;
        cin>>max;

        for (int i=min;i<=max;i++)
        {
            if (i%2==0)
            {
                factorial(i);
            }
            
        }
    }

        void factorial(int a){
             long long int fact = 1;
           
           for (int j = 1;j<=a;j++)
           {
             
              fact = fact*j;
             
           }
            cout<<"Factorial of "<<a<<" is : "<<fact<<endl;
           

        }
        
    

};
int main() {
   Factorial t;
   t.getData();
   return 0;
}