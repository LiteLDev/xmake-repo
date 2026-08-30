#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsWildcard;
    ::ll::TypedStorage<4, 4, int>  mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandWildcardInt();

    MCNAPI int getValue() const;

    MCNAPI bool isWildcard() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
