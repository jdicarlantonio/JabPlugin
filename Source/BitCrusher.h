#pragma once

class BitCrusher
{
public:
	BitCrusher();
	~BitCrusher();	

	void crushIt(float* buffer, float numSamples);
	void setBits(float bits)
	{
		bitDepth = bits;
	}
	float getBits()
	{
		return bitDepth;
	}

private:
	float bitDepth;
};

