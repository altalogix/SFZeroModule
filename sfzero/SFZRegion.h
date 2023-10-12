/*************************************************************************************
 * Original code copyright (C) 2012 Steve Folta
 * Converted to Juce module (C) 2016 Leo Olivers
 * Forked from https://github.com/stevefolta/SFZero
 * For license info please see the LICENSE file distributed with this source
 *code
 *************************************************************************************/
#ifndef SFZREGION_H_INCLUDED
#define SFZREGION_H_INCLUDED

#include "SFZCommon.h"

namespace sfzero {

class Sample;

// Region is designed to be able to be bitwise-copied.

struct EGParameters {
  float delay, start, attack, hold, decay, sustain, release;

  void clear();
  void clearMod();
};

struct Region {
  enum Trigger { attack, release, first, legato };

  enum LoopMode {
    sample_loop,
    no_loop,
    one_shot,
    loop_continuous,
    loop_sustain
  };

  enum OffMode { fast, normal };

  Region();
  void clear();
  void clearForSF2();
  void clearForRelativeSF2();
  void addForSF2(Region *other);
  void sf2ToSFZ();
  juce::String dump();

  bool matches(int note, int velocity, Trigger trig) {
    return (note >= lokey && note <= hikey && velocity >= lovel &&
            velocity <= hivel &&
            (trig == this->trigger ||
             (this->trigger == attack && (trig == first || trig == legato))));
  }

  Sample *sample;
  int lokey, hikey;
  int lovel, hivel;
  Trigger trigger;
  int group;
  juce::int64 off_by;
  OffMode off_mode;

  juce::int64 offset;
  juce::int64 end;
  bool negative_end;
  LoopMode loop_mode;
  juce::int64 loop_start, loop_end;
  int transpose;
  int tune;
  int pitch_keycenter, pitch_keytrack;
  int bend_up, bend_down;

  float volume, pan;
  float amp_veltrack;

  EGParameters ampeg, ampeg_veltrack;

  static float timecents2Secs(int timecents);
};
}  // namespace sfzero

#endif  // SFZREGION_H_INCLUDED
