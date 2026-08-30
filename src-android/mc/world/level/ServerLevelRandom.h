#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelRandom.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class ServerLevelRandom : public ::LevelRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerLevelRandom();

    virtual ::Random& getThreadRandom();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerLevelRandom();
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
    MCNAPI ::Random& $getThreadRandom();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
