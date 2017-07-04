#include "BitCrusher.h"

#include <cmath>

BitCrusher::BitCrusher()
: bitDepth{8}
{}

BitCrusher::~BitCrusher()
{}

void BitCrusher::crushIt(float* buffer, float numSamples)
{
	float maxValues = (pow(2.0f, bitDepth) - 1.0f);
	float halfMax = maxValues * 0.5f;
	float stepSize = 1.0f / halfMax;

	for(int i = 0; i < numSamples; ++i) {
		float oldSample = buffer[i];

		buffer[i] = stepSize * static_cast<int>(oldSample * halfMax);
	}
}
