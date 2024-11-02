class Solution {
public:
    double myPow(double x, int n) {
        double a = n > 0 ? x : double(1/x);
        int power = abs(n);
        double oddMultiplication = 1;
        if(power == 0){
            return 1;
        }
        while(power!=1){
            if(power&1){
                oddMultiplication *= a;
                a*=a;
                power/=2;
            }
            else{
                a*=a;
                power/=2;
            }
        }
        cout<<"odd: "<<oddMultiplication << " a: "<<a<<endl;
        return oddMultiplication*a;
    }
};