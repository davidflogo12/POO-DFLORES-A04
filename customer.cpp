//
// Created by balta on 29/01/2018.
//
#include <customer.h>
#include <iostream>
#include "customer.h"

double customer::getDiscount(){
    return Discount;

}
std::string customer::getName(){
    return Name;
}

int customer::getId(){
    return Id;
}

void customer::setDiscount(double Discount) {
     Discount=.40;
    customer::Discount=Discount
}

void customer::customer( int id , double discount,std::string name){
    customer::Id =Id;

    customer::Discount= Discount;

    customer::Name= Name    ;
}

std::string customer::toString(std::string name, int id){

}
