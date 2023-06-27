
//Calculator Program using two variable

#include<iostream>

template<typename T>

class Calculator{
    private:
    T val1, val2, result;

    public:

    void set_val(T num1,T num2)
    {
        val1 = num1;
        val2 = num2;
    }

    T sum(void)
    {
        result = val1 + val2;
        return result;
    }
};

int main (void)
{
    std::cout << "Calculator Prog" << std::endl;

    //sum int num
    Calculator<int> cal_int;
    cal_int.set_val(10,10);
    std::cout << "sum = " << cal_int.sum() << std::endl;

    //sum float num
    Calculator<float> cal_fl;
    cal_fl.set_val(10.5,10.5);
    std::cout << "sum = " << cal_fl.sum() << std::endl;

    return 0;
}