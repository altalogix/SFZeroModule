/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.md file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 SFZero
  vendor:             altalogix
  version:            2.0.3
  name:               SFZero sfz player
  description:        SFZero .szf/.sf2 soundfont player; forked from
https://github.com/stevefolta/SFZero and converted to Juce module by Leo Olivers
  website:            https://github.com/altalogix/SFZeroModule
  license:            MIT
  minimumCppStandard: 17

  dependencies:       juce_gui_basics, juce_audio_basics, juce_audio_processors

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once
#ifndef INCLUDED_SFZERO_H
#define INCLUDED_SFZERO_H

#include "sfzero/RIFF.h"
#include "sfzero/SF2.h"
#include "sfzero/SF2Generator.h"
#include "sfzero/SF2Reader.h"
#include "sfzero/SF2Sound.h"
#include "sfzero/SF2WinTypes.h"
#include "sfzero/SFZCommon.h"
#include "sfzero/SFZDebug.h"
#include "sfzero/SFZEG.h"
#include "sfzero/SFZReader.h"
#include "sfzero/SFZRegion.h"
#include "sfzero/SFZSample.h"
#include "sfzero/SFZSound.h"
#include "sfzero/SFZSynth.h"
#include "sfzero/SFZVoice.h"

#endif  // INCLUDED_SFZERO_H
