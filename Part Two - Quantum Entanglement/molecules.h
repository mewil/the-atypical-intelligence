#ifndef MOLECULE_H
#define MOLECULE_H

/* Molecule.h
 *
 * Abstract data type representing an molecule
 *
 * By Michael Wilson <mewil@umich.edu>
 * Updated
 *   4-5-2017
 */

///////////////////////////////////////////////////////////////
//                MOLECULE CLASS DECLARATIONS                //
///////////////////////////////////////////////////////////////

class Molecule {
 public:
  //EFFECTS returns player's name
  virtual const std::string & get_name() const = 0;

  //REQUIRES player has less than MAX_HAND_SIZE cards
  //EFFECTS  adds Card c to Player's hand
  virtual void add_card(const Card &c) = 0;
  
  // Maximum number of cards in a player's hand
  static const int MAX_HAND_SIZE = 5;

  // Needed to avoid some compiler errors
  virtual ~Molecule() {}

public:



private:


};


/*
DihydrogenMonoxide
*/

class DihydrogenMonoxide : public Molecule {
	public:
		DihydrogenMonoxide(const std::string &_name);
		virtual const std::string & get_name() const override;
	private:
		const std::string moleculeType = "DihydrogenMonoxide";
		const std::string commonName = "Water";

		std::string name;
		std::vector<atom> hand;
};

///////////////////////////////////////////////////////////////
//              MOLECULE CLASS IMPLEMENTATIONS               //
///////////////////////////////////////////////////////////////

/*
DihydrogenMonoxide(Water):
	Properties:
*/

Simple::Simple(const std::string &_name) : name(_name) {}


//EFFECTS returns player's name
const std::string & Simple::get_name() const {
	return name;
}


//REQUIRES player has less than Player::MAX_HAND_SIZE cards
//EFFECTS  adds Card c to Player's hand
void Simple::add_card(const Card &c) {
	assert((int)hand.size() < Player::MAX_HAND_SIZE);

	//adds card to hand vector and sorts hand
	hand.push_back(c);

	std::sort(hand.begin(), hand.end());
}




















#endif