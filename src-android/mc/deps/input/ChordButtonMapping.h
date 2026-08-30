#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChordButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              generatedButtonName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> sourceButtonNames;
    ::ll::TypedStorage<4, 4, float>                     minHoldTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ChordButtonMapping& operator=(ChordButtonMapping const&);
    ChordButtonMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChordButtonMapping();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
