//
// Created by balta on 29/01/2018.
//

#ifndef UNTITLED_INVOICE_H
#define UNTITLED_INVOICE_H

#include <customer.h>
#include <InvoiceItems.h>
#include <iostream>
class Invoice {
private:
    std::string Id;
    customer::Customer;
    double amount=0;
    InvoiceItems[] items;


public:
    Invoice(std::string Id, int customerId, std::string name, double discount);
    Invoice(std::string Id, customer::customer);

    bool addItem(std::string id, std::string description,int quantity, double unitPrice);
    bool addItem(InvoiceItems item);
    bool removeItem(std::string Id);
    bool removeItem(InvoiceItems item);
    void updateItem(std::string Id,std::string description);
    bool updateItem(std::string iI, int quantity);
    bool updateItem(std::string Id, double unitPrice);
    bool updateItem(InvoiceItems item);
    bool updateItem(std::string id, std::string desc);
    bool updateItem(std::string Id, int quantity);
    bool updateItem(std::string Id, double unitPrice);
    bool updateItem(InvoiceItem);
    bool findItem(InovoiceItem);


};


#endif //UNTITLED_INVOICE_H
