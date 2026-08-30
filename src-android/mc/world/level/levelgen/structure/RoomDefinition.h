#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition : public ::std::enable_shared_from_this<RoomDefinition> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                           mIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<RoomDefinition>>> mConnections;
    ::ll::TypedStorage<8, 24, std::vector<bool>>                            mHasOpening;
    ::ll::TypedStorage<1, 1, bool>                                          mClaimed;
    ::ll::TypedStorage<1, 1, bool>                                          mIsSource;
    ::ll::TypedStorage<4, 4, int>                                           mScanIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RoomDefinition(::RoomDefinition const&);

    MCNAPI bool findSource(int);

    MCNAPI void setConnection(uchar const&, std::shared_ptr<RoomDefinition>);

    MCNAPI ~RoomDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RoomDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
