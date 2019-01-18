#include <iostream>
#include <string>
#include "Contacts.h"


using namespace std;
void welcomeMessage();
void farewellMessage();
void debugging();


Contacts createContact(string contactName, string contactLastName, string contactEmail, long contactPhone){
  Contacts person;
  person.setName(contactName);
  person.setLastName(contactLastName);
  person.setEmail(contactEmail);
  person.setPhone(contactPhone);
  return person;
}

void showContact(Contacts person){
  cout << "Full name: " << person.getName() << " " << person.getLastName() << endl;
  cout << "Email: " << person.getEmail() << endl;
  cout << "Phone number: " << person.getPhone() << endl;
}





int main() {


  // ##################################################################
  Contacts people[3]; // An array that will contain contacts objects
  bool running = true; // flag variable
  char answer;


  string name, lastName, email; //input
  long number; //input
  // ##################################################################

  welcomeMessage();

  //debugging();

  while (running) {

    for (int idx = 0; idx < 3; idx++){

      // Ask the user for info

      cout << "Name: " << endl;
      cin >> name;
      cout << "Last name: " << endl;
      cin >> lastName;
      cout << "Email: " << endl;
      cin >> email;
      cout << "Phone number: " << endl;
      cin >> number;


      // Create the contact
      Contacts person = createContact(name, lastName, email, number);

      // Append the contact to the array
      people[idx] = person;

      // Increment the counter which shows the length of the array



      cout << "Do you want to add another contact? (Y/N)" << endl;
      cin >> answer;
      cout << endl;

      if (answer == 'N' || answer == 'n') {
        cout << "******************************************" << endl;
        cout << "CONTACTS" << endl;
        running = false;
        break;
      }else if (idx == 2 && (answer != 'N' || answer != 'n')){
        cout << "Sorry, you ran out of memory!" << endl;
        cout << "******************************************" << endl;
        cout << "CONTACTS" << endl;
        running = false;
        break;
      }
    }


    // Display the existing contacts
    for (int j = 0; j < 3; j++){

      // Check if the array element contains a Contacts object
      if (people[j].getName() != ""){

        showContact(people[j]);
        cout << endl;

      }else{

        break;
      }
    }

  }

  farewellMessage();

  return 0;
}


void debugging(){
  Contacts contact1;
  contact1 = createContact("John", "Poe", "hohn.doe@gmail.com", 5552013451);

  showContact(contact1);

  contact1.setLastName("Doe");
  contact1.setEmail("john.doe@gmail.com");

  showContact(contact1);
}

void welcomeMessage(){
  cout << "******************************************" << endl;
  cout << "WELCOME!" << endl;
  cout << "******************************************" << endl;
}

void farewellMessage(){
  cout << "******************************************" << endl;
  cout << "GOODBYE!" << endl;
  cout << "******************************************" << endl;
}
