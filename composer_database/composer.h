// composer.h, Maggie Johnson
// Description: The class for a Composer record.
// The default ranking is 10 which is the lowest possible.
// Notice we use const in C++ instead of #define.
const int kDefaultRanking = 10;

using namespace std;

class Composer {
 public:
  // Constructor
  Composer()
  {
    set_ranking(10);
  }
  // Here is the destructor which has the same name as the class
  // and is preceded by ~. It is called when an object is destroyed
  // either by deletion, or when the object is on the stack and
  // the method ends.
  ~Composer()
  {}

  // Accessors and Mutators
  void set_first_name(string in_first_name);
  string first_name();
  void set_last_name(string in_last_name);
  string last_name();
  void set_composer_yob(int in_composer_yob);
  int composer_yob();
  void set_composer_genre(string in_composer_genre);
  string composer_genre();
  void set_ranking(int in_ranking);
  int ranking();
  void set_fact(string in_fact);
  string fact();

  // Methods
  // This method increases a composer's rank by increment.
  void Promote(int increment);
  // This method decreases a composer's rank by decrement.
  void Demote(int decrement);
  // This method displays all the attributes of a composer.
  void Display();

 private:
  string first_name_;
  string last_name_;
  int composer_yob_; // year of birth
  string composer_genre_; // baroque, classical, romantic, etc.
  string fact_;
  int ranking_;
};

//Method definitions

void Composer::Promote(int increment)
{
  if(ranking_ - increment >= 1)
    ranking_ -= increment;
  else
    ranking_ = 10;
}

void Composer::Demote(int decrement)
{
  if(ranking_ + decrement <= 10)
    ranking_ += decrement;
  else
    ranking_ = 10;
}

void Composer::Display()
{
  //cout << "Displaying Information..." << endl;
  cout << "Name: " << first_name_ << " " << last_name_ << endl;
  cout << "Year of birth: " << composer_yob_ << endl;
  cout << "Genre: " << composer_genre_ << endl;
  cout << "Fact: " << fact_ << endl;
  cout << "Ranking: " << ranking_ << endl;
  cout << "***********************************************" << endl;
} 



// Definitions for all actuators
string Composer::first_name()
{
  return first_name_;
}

string Composer::last_name()
{
  return last_name_;
}

int Composer::composer_yob()
{
  return composer_yob_;
}

string Composer::composer_genre()
{
  return composer_genre_;
}

int Composer::ranking()
{
  return ranking_;
}

string Composer::fact()
{
  return fact_;
}

//Definitions for all Mutators

void Composer::set_first_name(string in_first_name)
{
  first_name_ = in_first_name;
  //return;
}
  
void Composer::set_last_name(string in_last_name)
{
  last_name_ = in_last_name;
  //return;
}

void Composer::set_composer_yob(int in_composer_yob)
{
  composer_yob_ = in_composer_yob;
  //return;
}

void Composer::set_composer_genre(string in_composer_genre)
{
  composer_genre_ = in_composer_genre;
  //return;
}

void Composer::set_ranking(int in_ranking)
{
  ranking_ = in_ranking;
  //return;
}

void Composer::set_fact(string in_fact)
{
  fact_ = in_fact;
  //return;
}
