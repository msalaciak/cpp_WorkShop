//
//  Circle.cpp
//  classes
//
//  Created by Matt Salaciak on 2019-03-02.
//

#include "Circle.h"
#include "ofMain.h"

void Circle:: draw() {
    ofSetCircleResolution(100);
    
    ofDrawCircle(posx, posy, radius);

}





