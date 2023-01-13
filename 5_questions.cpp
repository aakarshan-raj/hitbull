#include <iostream>

using namespace std;

class factorial{
    public:
int calculate(int n){
    int k = n;
    int fac = 1;
   for(int i=0;i<k;i++){
     fac = fac*n;
     n--;
   }
   return fac;
}
};
class reverse{
    public:
int calculate(int n){
      int rev = 0;
    int rem;

  while(n != 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
cout<<rev;
}



  

};

class complex{
    public:
    int real;
    int img;
    complex(int a,int b):real(a),img(b){
    }
    void sum(complex &b){
        cout<<"sum of these two complex number is:"
        <<(real+b.real)<<"+"<<(img+b.img)<<"i";
    }
};

class largest_3{

public:
largest_3(int a,int b,int c){
 
 if(a>b){
    if(a>c){
        cout<<a<<" is greatest"<<endl;
    }
 }
 else if(b>c){
       cout<<b<<" is greatest"<<endl;
 }
 else{
       cout<<c<<" is greatest"<<endl;

 }
 

}

};

class sum_of_odd{

 public:
 sum_of_odd(){
    int sum =0;
    for(int i=0;i<100;i++){
     if(i%2!=0){
        sum = sum+i;
     }
    }
 cout<<" Sum of odd numbers between 1 and 100:"<<sum<<endl;
 }
};

class print_n{

public:
print_n(int n){
    if(n>0){
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
}
}

};

class swap_two{

public:
  int c;
  swap_two(int &a, int &b){
     c = b;
     b = a;
     a = c;

  }

};


int main(){
factorial fac;    
cout<<fac.calculate(3);
complex c1(2,4);
complex c2(5,2);
c2.sum(c1);
largest_3 f(1,4,3);
sum_of_odd s1;
print_n n(9);
int a = 3;
int b = 2;
swap_two g(a,b);
cout<<a<<" "<<b;
reverse r1;
r1.calculate(4249);

}
