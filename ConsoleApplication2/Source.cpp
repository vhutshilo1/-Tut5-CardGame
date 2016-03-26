#include<iostream>
#include<string>
using namespace std;
//class Card definition
class Card
{
public:
	//default constructor
	Card(int number = 0, string colour = "")
	{
		set(number, colour); //Setting object's private data members
	}

	void set(int number, string colour)
	{
		//Assigning values to a newl created objet.
		Number = number;
		Colour = colour;
	}
	//Function to print the object's attributes.
	void print()
	{
		cout << "The card number is " << Number << "and the colour is " << Colour << endl;
		cout << endl;
	}

private:
	//Private data members only accessible by class members or friends
	int Number;
	string Colour;
};//end of class Card

int main()
{
	Card card(8, "red");//creating new object card of type Card
	card.print();//requesting the object to print it's attributes

	return 0;
}
