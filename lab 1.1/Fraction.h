#pragma once
class Fraction
{
private:
	unsigned int first;
	unsigned int second;
public:
	bool setFirst(int value);
	bool setSecond(int value);
	unsigned int getFirst() const { return first; }
	unsigned int getSecond() const { return second; }
	void read();
	void display() const;
	unsigned int ipart();
	bool init(int first, int second);

};

