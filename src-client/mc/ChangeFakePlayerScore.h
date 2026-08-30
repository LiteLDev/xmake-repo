#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChangeFakePlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk32c5b5;
    ::ll::UntypedStorage<8, 32> mUnkb8c739;
    ::ll::UntypedStorage<4, 4>  mUnk3c7447;
    ::ll::UntypedStorage<8, 32> mUnk3ad021;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeFakePlayerScore& operator=(ChangeFakePlayerScore const&);
    ChangeFakePlayerScore();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChangeFakePlayerScore(::ChangeFakePlayerScore const&);

    MCNAPI bool operator==(::ChangeFakePlayerScore const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChangeFakePlayerScore const&);
    // NOLINTEND
};
