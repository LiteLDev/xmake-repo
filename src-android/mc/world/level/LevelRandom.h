#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Random.h"
#include "mc/world/level/ILevelRandom.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class LevelRandom : public ::ILevelRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2544, ::Random> mRandom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRandom();

    virtual ::IRandom& getIRandom();

    virtual ::Random& getRandom();

    virtual ::Random& getThreadRandom();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IRandom& $getIRandom();

    MCNAPI ::Random& $getRandom();

    MCNAPI ::Random& $getThreadRandom();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
