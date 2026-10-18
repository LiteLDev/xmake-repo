#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ChordButtonMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                generatedButtonName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> sourceButtonNames;
    ::ll::TypedStorage<4, 4, float>                         minHoldTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ChordButtonMapping& operator=(ChordButtonMapping const&);
    ChordButtonMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChordButtonMapping(::ChordButtonMapping const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChordButtonMapping const&);
    // NOLINTEND
};
#else // @header-generator platform
struct ChordButtonMapping {};
#endif // @header-generator platform
#endif // @header-generator platform
