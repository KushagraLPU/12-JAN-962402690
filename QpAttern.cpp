#include <iostream>

int main()  
{  
 char ch='A'; 
 int size=5;
 int lt=size;
 
    int i, j, k, m;    
    std::cout<<"hello this is your pattern \n ";
    for(i=1;i<=size;i++)    
    {  if (i<=(size/2)+1)  
        {std::cout<<"\n";    
        ch ='A';
        for(j=(size/2)+1;j>=i;j--)    
            std::cout<<" ";    
        for(k=1;k<=i;k++)    // printing charcters
            std::cout<<ch++;    
                
        for(m=1;m<i;m++)    
            std::cout<<ch++;    
        }else if(i==size)
        {
        std::cout<<"\n";
        for(j=1;j<(size/2)+2;j++)
                {std::cout<<" ";}
        std::cout<<"A";
        }else
        if (i>(size/2)+1)
        {std::cout<<"\n";
         ch ='C';
         for(j=(size/2)+1;j<=i;j++)    
             std::cout<<" "; 
             
         for(k=lt+(size/2);k>i;k--)    
             {std::cout<<ch--; }
             lt--;
                
         
         
    }
    }
}
