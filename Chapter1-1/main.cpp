//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

struct Person
{
    double height;
    float weight;
    int age;
    string name;

    void print()
    {
        cout << height << " " << weight << " " << name << " " << age << endl;
    }

};

struct Family {
    Person me, mom, dad;
};

Person getMe()
{
    Person me{2.0, 100.0, 20, "Jack Jack"};

    return me;
}


int main()
{

    Person me_from_func = getMe();
    me_from_func.print();

    //Person me{2.0, 100.0, 20, "Jack Jack"};
    //me.print();

    //Person me2(me);
    //me2 = me;
    //me2.print();


    return 0;

}