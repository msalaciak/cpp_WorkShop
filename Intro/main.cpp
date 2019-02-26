//intro to c++ examples


#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
   
    //pointer examples
    int test1 = 5;
    int test2 = 12;
    
    int *testPointer1 = &test1;
    
    int *testPointer2 = &test2;
    
    
    cout<<"test1 variable printed"<<endl;
    cout<<test1<<"\n"<<endl;
    
    cout<<"test1 variable reference printed "<<endl;
    cout<<&test1<<"\n"<<endl;
    
    
    cout<<"test2 variable printed"<<endl;
    cout<<test2<<"\n"<<endl;
    
    cout<<"test2 variable reference printed "<<endl;
    cout<<&test2<<"\n"<<endl;
    
    
    cout<<"testPointer1 variable reference printed "<<endl;
    cout<<&testPointer1<<"\n"<<endl;
    
    cout<<"testPointer2 variable reference printed "<<endl;
    cout<<&testPointer2<<"\n"<<endl;
    
    
    testPointer1 = testPointer2;
    
    cout<<"testPointer1 = testPointer2 reference printed "<<endl;
    cout<<testPointer1<<"\n"<<endl;
    
    cout<<"testPointer1 value printed "<<endl;
    cout<<*testPointer1<<"\n"<<endl;
    
    
    
    
    
    
    return 0;
}
