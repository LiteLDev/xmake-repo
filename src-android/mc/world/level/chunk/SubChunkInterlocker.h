#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/SubChunkPos.h"

class SubChunkInterlocker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>           mSpinLock;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mLocked3x3x3SubChunks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool tryLock3x3x3(::SubChunkPos const&);

    MCNAPI bool tryLock3x3xN(::SubChunkPos const&, int);

    MCNAPI void unlock3x3x3(::SubChunkPos const&);

    MCNAPI void unlock3x3xN(::SubChunkPos const&, int);
    // NOLINTEND
};
