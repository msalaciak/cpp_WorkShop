//intro to c++ examples


#include <iostream>
#include <vector>
using namespace std;


void passByValue(int value){
    cout<<"pass by value"<<endl;
    cout<<"memory address: "<< &value<<endl;
     cout<<"value: "<< value<<endl;
     cout<<"\n"<<endl;
    
}

void passByReference(int &value){
    cout<<"pass by reference"<<endl;
    cout<<"memory address: "<< &value<<endl;
     cout<<"value: "<< value<<endl;
     cout<<"\n"<<endl;
}

void passByPointer(int *value){
    cout<<"pass by pointer"<<endl;
    cout<<"memory address: "<< value<<endl;
   cout<<"value: "<< *value<<endl;
    cout<<"\n"<<endl;
    
}

void vectorPassing (vector<int> &valueVector, const  int &values){
    
    valueVector.push_back(values);
    cout<<"Value inserted in vector is "<<values<< " memory location is : " <<&values<<"\n"<<endl;
    cout<<"values inside vector and their memory locations"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    for(int i =0; i<valueVector.size();++i){
        
        cout<<"Value: "<<i+1<<" memory location in the vector is: " <<&valueVector[i]<<endl;
        cout<<"Value: "<< i+1 << " is : " <<valueVector[i]<<endl;
        cout<<"-------------------------------------------------------"<<endl;

        
    }

}

void vectorPassing2 (vector<int> &valueVector, int &value){
    value = 9;
    for(int i=0; i<valueVector.size(); i++) {
        valueVector[i]=value;
        
    }
    
    
}


void vectorPassingPointers (vector<int> &valueVector,  int *values){
    
    valueVector.push_back(*values);
    cout<<"Value inserted in vector is "<<*values<< " memory location is : " <<&values<<"\n"<<endl;
    cout<<"values inside vector and their memory locations"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    for(int i =0; i<valueVector.size();++i){
        
        cout<<"Value: "<<i+1<<" memory location in the vector is: " <<&valueVector[i]<<endl;
        cout<<"Value: "<< i+1 << " is : " <<valueVector[i]<<endl;
        cout<<"-------------------------------------------------------"<<endl;
        
        
    }
    
}

void vectorPassing2Pointers (vector<int> &valueVector, int *values){
    int otherValue =9;
    values = &otherValue;
    
    for(int i=0; i<valueVector.size(); i++) {
        valueVector[i]=*values;
        
    }
    
    
}




void vectorMath(vector<int> *numbers){
    cout<<"now printing vector values and memory address after it is passed\n"<<endl;
    for(int i=0; i<numbers->size(); ++i){
        cout<<"value of number "<<i<<" is "<< numbers->at(i)<<endl;
        cout<<"memory address of number "<<i<<" is "<< &numbers->at(i)<<endl;

    }
    
 
    
}

void vectorMath2(vector<int> *numbers){
    cout<<"multiplying numbers in vector by 2"<<endl;
    cout<<"now printing vector values and memory address after it is passed\n"<<endl;
    for(int i=0; i<numbers->size(); ++i){
        numbers->at(i) *=2;
        cout<<"value of number "<<i<<" is "<< numbers->at(i)<<endl;
        cout<<"memory address of number "<<i<<" is "<< &numbers->at(i)<<endl;
        
    }

}

int main(int argc, const char * argv[]) {
   
    //pointer examples
    cout<<"Pointer examples" <<endl;
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
    
    cout<<"------------------------------------------"<<endl;
    int value = 234;
    cout<<"parameter passing by value, reference and pointer"<<endl;
    cout<<"value is set to 234"<<endl;
    cout<<"value location in main memory: " << &value <<"\n"<<endl;
    
    
    
    passByValue(value);
    passByReference(value);
    passByPointer(&value);
    cout<<"------------------------------------------"<<endl;
    
    int value1 = 10;
    int value2 = 5;
    cout<<"passing vector and values by reference"<<endl;
    cout<<" " <<endl;
    
    vector<int> valueVector;
    cout<<"Value1 before being passed to the vector is: " <<value1<<endl;
    cout<<"Value1 before vector is at memory location: "<<&value1<<endl;
    cout<<""<<endl;
    
    vectorPassing(valueVector, value1);
    
    cout<<"Value2 before being passed to the vector is: " <<value2<<endl;
    cout<<"Value2 before vector is at memory location: "<<&value2<<endl;
    cout<<""<<endl;
    vectorPassing(valueVector, value2);
 
    
    for(const int &i: valueVector){
        cout<<i<<endl;
        cout<<"memory location: " << &i<<endl;
    }
    
    cout<<"now lets change some values inside the function and vector "<<endl;
    
    
    vectorPassing2(valueVector,value1);
    vectorPassing2(valueVector,value2);

    
    for(int i=0; i<valueVector.size(); i++){
        cout<<valueVector[i]<<endl;
    }
    
    cout<<"\n"<<endl;
    cout<<"now lets see what happened to the orignal values"<<endl;
    cout<<value1<<endl;
    cout<<value2<<endl;
    cout<<"\n"<<endl;

    cout<<"are the memory locations the same as before we changed them in the function?"<<endl;
    cout<<&value1<<endl;
    cout<<&value2<<endl;
    cout<<""<<endl;
    
    cout<<"how about the memory locations in the vector?"<<endl;
    for(int i=0; i<valueVector.size();i++){
        cout<<&valueVector.at(i)<<endl;
        
    }
    
    //this is why with & it is important to use const

    
    cout<<""<<endl;
    cout<<"lets do the same thing but passing the values by pointers"<<endl;
    
    vector<int> newValues;
    
    int newValue1 =12;
    int newValue2 = 7;
    
    vectorPassingPointers(newValues, &newValue1);
    vectorPassingPointers(newValues, &newValue2);

    
      cout<<"now lets change some values inside the function and vector and print the vector \n"<<endl;
    
    
    vectorPassing2Pointers(newValues, &newValue1);
    vectorPassing2Pointers(newValues, &newValue2);
    
    for(int i=0; i<newValues.size(); i++) {
        cout<<newValues.at(i)<<endl;
    }
    
    cout<<"now lets see the original values...will they be changed in the previous example? \n"<<endl;

    cout<<newValue1<<endl;
    cout<<newValue2<<endl;
    
    
    
//    cout<<""<<endl;
//    cout<<"Passing a vector as a pointer"<<endl;
//    cout<<""<<endl;
//
//    vector<int> numbers;
//
//    int number1 =2;
//    int number2 =4;
//    int number3 =3;
//
//
//
//
//    numbers.push_back(number1);
//    numbers.push_back(number2);
//    numbers.push_back(number3);
//
//    for(int i =0; i<numbers.size();++i){
//        cout<<"value of number "<<i<<" is "<< numbers.at(i)<<endl;
//        cout<<"memory address of number "<<i<<" is "<< &numbers.at(i)<<endl;
//
//    }
//
//    cout<<""<<endl;
//
//
//    vectorMath(&numbers);
//
//    cout<<""<<endl;
//    cout<<"lets do some math inside the vector function and see what happens"<<endl;
//
//    vectorMath2(&numbers);
//
//

 
    
    return 0;
}
