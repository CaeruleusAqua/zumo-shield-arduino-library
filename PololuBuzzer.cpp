// Copyright Pololu Corporation.  For more information, see http://www.pololu.com/

#include <avr/interrupt.h>
#include "PololuBuzzer.h"


// this is called by playFrequency()
inline void PololuBuzzer::init()
{

}

// initializes timer4 (32U4) or timer2 (328P) for buzzer control
void PololuBuzzer::init2()
{
 
}


// Set up the timer to play the desired frequency (in Hz or .1 Hz) for the
//   the desired duration (in ms). Allowed frequencies are 40 Hz to 10 kHz.
//   volume controls buzzer volume, with 15 being loudest and 0 being quietest.
// Note: frequency*duration/1000 must be less than 0xFFFF (65535).  This
//   means that you can't use a max duration of 65535 ms for frequencies
//   greater than 1 kHz.  For example, the max duration you can use for a
//   frequency of 10 kHz is 6553 ms.  If you use a duration longer than this,
//   you will cause an integer overflow that produces unexpected behavior.
void PololuBuzzer::playFrequency(unsigned int freq, unsigned int dur,
                     unsigned char volume)
{
 
}



// Determine the frequency for the specified note, then play that note
//  for the desired duration (in ms).  This is done without using floats
//  and without having to loop.  volume controls buzzer volume, with 15 being
//  loudest and 0 being quietest.
// Note: frequency*duration/1000 must be less than 0xFFFF (65535).  This
//  means that you can't use a max duration of 65535 ms for frequencies
//  greater than 1 kHz.  For example, the max duration you can use for a
//  frequency of 10 kHz is 6553 ms.  If you use a duration longer than this,
//  you will cause an integer overflow that produces unexpected behavior.
void PololuBuzzer::playNote(unsigned char note, unsigned int dur,
                 unsigned char volume)
{
  
}



// Returns 1 if the buzzer is currently playing, otherwise it returns 0
unsigned char PololuBuzzer::isPlaying()
{
  return false;
}

void PololuBuzzer::play(const char *notes)
{
 
}

void PololuBuzzer::playFromProgramSpace(const char *notes_p)
{
 
}


// stop all sound playback immediately
void PololuBuzzer::stopPlaying()
{
 
}

// Gets the current character, converting to lower-case and skipping
// spaces.  For any spaces, this automatically increments sequence!
static char currentCharacter()
{
  char c = 0;
  return c;
}

// Returns the numerical argument specified at buzzerSequence[0] and
// increments sequence to point to the character immediately after the
// argument.
static unsigned int getNumber()
{
  unsigned int arg = 0;
  return arg;
}

static void nextNote()
{
 
}


// This puts play() into a mode where instead of advancing to the
// next note in the sequence automatically, it waits until the
// function playCheck() is called. The idea is that you can
// put playCheck() in your main loop and avoid potential
// delays due to the note sequence being checked in the middle of
// a time sensitive calculation.  It is recommended that you use
// this function if you are doing anything that can't tolerate
// being interrupted for more than a few microseconds.
// Note that the play mode can be changed while a sequence is being
// played.
//
// Usage: playMode(PLAY_AUTOMATIC) makes it automatic (the
// default), playMode(PLAY_CHECK) sets it to a mode where you have
// to call playCheck().
void PololuBuzzer::playMode(unsigned char mode)
{
 
}


// Checks whether it is time to start another note, and starts
// it if so.  If it is not yet time to start the next note, this method
// returns without doing anything.  Call this as often as possible
// in your main loop to avoid delays between notes in the sequence.
//
// Returns true if it is still playing.
unsigned char PololuBuzzer::playCheck()
{
  return true;
}
