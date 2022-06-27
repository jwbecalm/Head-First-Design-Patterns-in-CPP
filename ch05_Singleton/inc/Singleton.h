#include <iostream>

using namespace std;

class Singleton{
private:
    int m_value;

    // 用于保存唯一的实例
    static Singleton* m_instance;    //static member function only can access static member
    
    
    // 构造函数设置为私有，确保不能被new
    Singleton(int value): m_value(value){}

    ~Singleton(){
        cout << "in ~Singleton()" << endl;
    }
    
public:
    // prohibiting copy constructor
    Singleton(const Singleton& other) = delete;             
    
    // prohibiting assignment operator
    Singleton& operator=(const Singleton& rhs) = delete;  // rhs stands for "right hand side"

    // 声明一个静态方法，作为“构造函数”，该方法会调用私有构造函数
    static Singleton* getInstance(int value);

    // 用于测试输出Sigleton是否生效
    void test();

    // 返回成员变量m_value
    int getValue();
    
};