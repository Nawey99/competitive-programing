class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>y;
        string e;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                e="FizzBuzz";
            }
			else if(i%3==0)
            {
                e="Fizz";
            }
            else if(i%5==0)
            {
                e="Buzz";
            }
            else 
            {
                e=to_string(i);
            }
            y.push_back(e);
                
        }
        return y;
    }
};
