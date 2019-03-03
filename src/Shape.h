//
//  Shape.hpp
//  classes
//
//  Created by Matt Salaciak on 2019-03-02.
//

#pragma once

#include <stdio.h>
#include <iostream>
using namespace std;


class Shape {
protected:
    double area;
    string name;
public:
    Shape() : name("Shape"){
        
    }
    Shape(string newName) : name(newName){
        
    }
    
    inline string getName(){
        return name;
    }
    
    virtual double getArea() =0;
    virtual void print() {
        cout<<"Shape: " << name << endl;
        cout <<"Area: " << getArea() <<endl;
        
        
    }
    
    
    
    
    
    
    
    
    
};
