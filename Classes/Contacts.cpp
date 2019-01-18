#include <iostream>
#include <string>
#include "Contacts.h"

using namespace std;

// Constructor
Contacts::Contacts(){

}

// Destructor
Contacts::~Contacts(){

}

// Getters (Accesser functions)

string Contacts::getName(){
  return theName;
}

string Contacts::getLastName(){
  return theLastName;
}

string Contacts::getEmail(){
  return theEmail;
}

long Contacts::getPhone(){
  return thePhone;
}



// Setters (Mutator functions)

void Contacts::setName(string newName){
  theName = newName;
}

void Contacts::setLastName(string newLastName){
  theLastName = newLastName;
}

void Contacts::setEmail(string newEmail){
  theEmail = newEmail;
}

void Contacts::setPhone(long newPhone){
  thePhone = newPhone;
}
