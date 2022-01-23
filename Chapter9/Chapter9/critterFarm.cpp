//Critter farm
//Demosntratesobject cointainment

#include <iostream>
#include <string>
#include <vector>

class Critter
{
public:
	Critter(const std::string& name = "");
	std::string GetName() const;

private:
	std::string mName;

};

Critter::Critter(const std::string& name) :
	mName(name)
{}

inline std::string Critter::GetName() const
{
	return mName;
}

class Farm
{
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;

private:
	std::vector <Critter> mCritters;
};

Farm::Farm(int spaces)
{
	mCritters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
	mCritters.push_back(aCritter);
}

void Farm::RollCall() const
{
	for (std::vector <Critter>::const_iterator iter = mCritters.begin();
		iter != mCritters.end();
		++iter)
	{
		std::cout << iter->GetName() << " here.\n";
	}
}

int main()
{
	Critter crit("Poochie's");
	std::cout << "My critter's name is " << crit.GetName() << std::endl;

	std::cout << "Creating critter farm.\n";
	Farm myFarm(3);

	std::cout << "\nAdding three critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));

	std::cout << "\nCalling Roll...\n";
	myFarm.RollCall();

	return 0;
}