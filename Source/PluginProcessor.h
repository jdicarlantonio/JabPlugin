/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "BitCrusher.h"


//==============================================================================
/**
*/
class JabAudioProcessor  : public AudioProcessor,
	public AudioProcessorValueTreeState::Listener
{
public:
    //==============================================================================
    JabAudioProcessor();
    ~JabAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

#define PARAM_SETNAME "ParamSetName"
#define PARAM_BYPASS "Bypass"
#define PARAM_BITDEPTH "Bit Depth"

	AudioProcessorValueTreeState& getState() { return *mState; }
	void parameterChanged(const String& parameterID, float newValue)
	{
		majorParamChange = true;
	}

private:
	bool majorParamChange;
	ScopedPointer<AudioProcessorValueTreeState> mState;
	ScopedPointer<UndoManager> mUndoManager;

	BitCrusher mBitCrusher;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JabAudioProcessor)
};
