#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
// clang-format on

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    SimpleBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleBlockVolumeIterator();

    virtual bool isValid() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
