#include <iostream>
using namespace std;

//Write Your Code Here

int main(int argc, const char * argv[]) {
    
    //----------PART ONE: DO NOT CHANGE CODE!----------
    
    Dog d("Beethoven","Saint Bernard",100,1,19.5,"Brown");
    d.printDetails();
    cout<<"----------------------"<<endl;
    d.walk(5);
    cout<<"----------------------"<<endl;
    d.sleep(2);
    cout<<"----------------------"<<endl;
    d.bark();
    cout<<"----------------------"<<endl;
    d.eat();
    cout<<"----------------------"<<endl;
    d.printDetails();
    cout<<"*------------------------------------------*"<<endl;
    Owner o("Jack",25,99891,"Beethoven");
    o.printDetails();
    cout<<"----------------------"<<endl;
    cout<<"*------------------------------------------*"<<endl;
    
    //----------PART TWO: WRITE BY YOURSELF!----------
    //Write Your Code Here
    
    
    return 0;
}
