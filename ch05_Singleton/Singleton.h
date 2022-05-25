#include <iostream>

using namespace std;

class Singleton{
private:
    int m_value;
    //static Singleton* m_instance;    //static member function only can access static member.g
    static Singleton m_instance;
    
    Singleton(int i): m_value(i){}
    ~Singleton(){
        cout << "in ~Singleton()" << endl;
    }
    
public:
    Singleton(Singleton const&)=delete;             // prohibiting copy constructor
    Singleton& operator=(Singleton const&)=delete;  // prohibiting assignment operator

    int getValue(){
        return m_value;
    }

    static Singleton& getInstance(){
        // if (m_instance == nullptr){
        //     cout << "m_instance == nullptr at the first time." << endl;
        //     m_instance = new Singleton(99);
        // }
        // return m_instance;

        static Singleton m_instance(99);
        return m_instance;
    }
};