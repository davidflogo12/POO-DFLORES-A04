//
// Created by balta on 29/01/2018.
//

#include "customer.h"
#include "invoice.h"

Invoice::Invoice(){
    this->id="";
    this->customer;
    this->amount;
    this->items=[];
}
Invoice::Inovice(std::string id, int customerId, std::stringname, double dsicount){
    this->id=id;
    this->customerId= customerId;
    this->name=name;
    this->discount=discount;
}

Invoice::Invoice(std::string Id, customer ){
    this->Id;
    this->customer=customer;

}





