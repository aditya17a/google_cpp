// database.h, Maggie Johnson
// Description: Class for a database of Composer records.
#include  <iostream>
#include  <algorithm>
#include "composer.h"
using namespace std;

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;

class Database {
 public:
  Database(){next_slot_ = 0;}
  ~Database(){}

  // Add a new composer using operations in the Composer class.
  // For convenience, we return a reference (pointer) to the new record.
  Composer& AddComposer(string in_first_name, string in_last_name,
                        string in_genre, int in_yob, string in_fact);
  // Search for a composer based on last name. Return a reference to the
  // found record.
  void GetComposer(string in_last_name);
  // Display all composers in the database.
  void DisplayAll();
  // Sort database records by rank and then display all.
  void DisplayByRank();

 private:
  // Store the individual records in an array.
  Composer composers_[kMaxComposers];
  // Track the next slot in the array to place a new record.
  int next_slot_;
};

Composer& Database::AddComposer(string in_first_name, string in_last_name,
                        string in_genre, int in_yob, string in_fact)
{
  composers_[next_slot_].set_first_name(in_first_name);
  composers_[next_slot_].set_last_name(in_last_name);
  composers_[next_slot_].set_composer_yob(in_yob);
  composers_[next_slot_].set_composer_genre(in_genre);
  composers_[next_slot_].set_fact(in_fact);
  composers_[next_slot_].set_ranking(10);

  return composers_[next_slot_++];
}

void Database::DisplayAll()
{
  for(int i=0;i<next_slot_;i++)
    composers_[i].Display();
}

void Database::GetComposer(string in_last_name)
{
  int positives[kMaxComposers];
  int counter=0;
  for(int i=0;i<next_slot_;i++){
    if(composers_[i].last_name() == in_last_name)
       positives[counter++] = i;
  }
  cout << "Found a total of " << counter << " records." << endl << endl;
  if(counter == 0)
    return;
  else{
    cout << "Displaying search results: " << endl;
    for(int j=0;j<counter;j++){
      composers_[positives[j]].Display();
    }
  }
}

void Database::DisplayByRank()
{
  sort(composers_[0],composers_[next_slot_],Composer.ranking());
  for(int i=0;i<next_slot_;i++){
    composers_[i].Display();

  }
}