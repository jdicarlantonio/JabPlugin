/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.0.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
JabAudioProcessorEditor::JabAudioProcessorEditor (JabAudioProcessor& ownerProc)
    : AudioProcessorEditor(ownerProc), processor(ownerProc)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (bypassBtn = new TextButton ("Bypass Toggle"));
    bypassBtn->setButtonText (TRANS("Bypass"));
    bypassBtn->addListener (this);
    bypassBtn->setColour (TextButton::buttonColourId, Colour (0xff4546a6));

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::RotaryVerticalDrag);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider->setColour (Slider::backgroundColourId, Colour (0xff235066));
    slider->setColour (Slider::thumbColourId, Colour (0x791793c4));
    slider->setColour (Slider::textBoxTextColourId, Colours::white);
    slider->setColour (Slider::textBoxBackgroundColourId, Colour (0x5f2f5780));
    slider->setColour (Slider::textBoxHighlightColourId, Colour (0xff273b43));
    slider->setColour (Slider::textBoxOutlineColourId, Colour (0x008e989b));
    slider->addListener (this);

    addAndMakeVisible (bdLabel = new Label ("BitDepth Label",
                                            TRANS("Bit Depth\n")));
    bdLabel->setFont (Font (16.50f, Font::plain).withTypefaceStyle ("Bold"));
    bdLabel->setJustificationType (Justification::centredLeft);
    bdLabel->setEditable (false, false, false);
    bdLabel->setColour (Label::textColourId, Colours::black);
    bdLabel->setColour (Label::outlineColourId, Colour (0x00000000));
    bdLabel->setColour (TextEditor::textColourId, Colours::black);
    bdLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
	bypassBtn->setClickingTogglesState(true);
    //[/UserPreSize]

    setSize (300, 225);


    //[Constructor] You can add your own custom stuff here..
	mBypassAttachment = new AudioProcessorValueTreeState::ButtonAttachment(processor.getState(),
																		PARAM_BYPASS, *bypassBtn);
	mBitDepthAttachment = new AudioProcessorValueTreeState::SliderAttachment(processor.getState(),
																		PARAM_BITDEPTH, *slider);
    //[/Constructor]
}

JabAudioProcessorEditor::~JabAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	mBypassAttachment = nullptr;
	mBitDepthAttachment = nullptr;
    //[/Destructor_pre]

    bypassBtn = nullptr;
    slider = nullptr;
    bdLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void JabAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void JabAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    bypassBtn->setBounds (0, 0, 50, 25);
    slider->setBounds (0, 25, 300, 200);
    bdLabel->setBounds (109, 168, 88, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void JabAudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == bypassBtn)
    {
        //[UserButtonCode_bypassBtn] -- add your button handler code here..
        //[/UserButtonCode_bypassBtn]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void JabAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="JabAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor"
                 constructorParams="JabAudioProcessor&amp; ownerProc" variableInitialisers="AudioProcessorEditor(ownerProc), processor(ownerProc)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="300" initialHeight="225">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="Bypass Toggle" id="54ffd955bd68b783" memberName="bypassBtn"
              virtualName="" explicitFocusOrder="0" pos="0 0 50 25" bgColOff="ff4546a6"
              buttonText="Bypass" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="new slider" id="214822ec634a5af9" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="0 25 300 200" bkgcol="ff235066" thumbcol="791793c4"
          textboxtext="ffffffff" textboxbkgd="5f2f5780" textboxhighlight="ff273b43"
          textboxoutline="8e989b" min="0" max="10" int="0" style="RotaryVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="BitDepth Label" id="d61211cf053fa4ee" memberName="bdLabel"
         virtualName="" explicitFocusOrder="0" pos="109 168 88 24" textCol="ff000000"
         outlineCol="0" edTextCol="ff000000" edBkgCol="0" labelText="Bit Depth&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="16.5" kerning="0" bold="1"
         italic="0" justification="33" typefaceStyle="Bold"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
