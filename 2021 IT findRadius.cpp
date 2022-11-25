
#include <iostream>

using namespace std;

void findRadius(float radius){
    if(radius > 10 && radius < 20){
        float r = 3.14 * (radius * radius);
        cout<<"radius :"<<r;
    }
    else{ cout<<"radius is not in range!!!"; }
}
