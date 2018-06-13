
#include <iostream>

using namespace std;


class Stooge
{
  public:
    // Factory Method
    virtual void slap_stick() = 0;
};


class Larry : public Stooge
{
public:
	void slap_stick()
	{
		cout << "Larry: poke eyes\n";
	}

	static Stooge * __stdcall Create() { return new Larry(); }

};


class Moe : public Stooge
{
public:
	void slap_stick()
	{
		cout << "Moe: slap head\n";
	}

    static Stooge * __stdcall Create() { return new Moe(); }

};


class Curly : public Stooge
{
public:
	void slap_stick()
	{
		cout << "Curly: suffer abuse\n";
	}

    static Stooge * __stdcall Create() { return new Curly(); }

};

