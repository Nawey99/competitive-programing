class Solution {
public:
    int fib(int n) {
        int fib2=0;
        int fib1=1;
        int Fib;
        if(n==0)return 0;
       else if(n==1 || n==2) return 1;
        else
        {
            int x=1;
            while(x < n)
            {
            Fib=fib1+fib2;
                fib2=fib1;
                fib1=Fib;
                x++;
            }
            return Fib;
        }
    }
};