//
//  Circle.hpp
//  classes
//
//  Created by Matt Salaciak on 2019-03-02.
//
#pragma once

#include <stdio.h>
#include <Shape.h>
#include <iostream>
using namespace std;

class Circle : public Shape {
 
private:
    double radius =0;
    int posx =0;
    int posy =0 ;
public:
    Circle() : Shape(), radius(2){};
    
    Circle(string n, double r) : Shape(n), radius(r) {};
    
    Circle(double r, int posx, int posy) : Shape(), radius(r), posx(posx), posy(posy) {};
    
    
    void setRadius(double r) {
        radius = r;
    }
    
    void setPosX(int x) {
        posx=x;
    }
    
    void setPosY(int y) {
        posy=y;
    }
    
    int getPosX(){
        return posx;
    }
    
    int getPosY(){
        return posy;
    }
    
    double getArea() {
        area = 3.14159265 * radius * radius;
        return area;
    }
    
    void print() {
        Shape::print();
        cout<<"Circle:"<<endl;
        cout<<"Radius: " << radius<<endl;
        
    }
    
    
    void draw();
    
    friend Circle operator+(const Circle &c1, const Circle &c2){
    
        int sumx =0;
        int sumy =0;
        int sumr =0;
        sumx = c1.posx + c2.posx;
        sumy = c1.posy + c2.posy;
        sumr = c1.radius + c2.radius;
        return Circle(sumr,sumx,sumy);
        
    }
    
};

