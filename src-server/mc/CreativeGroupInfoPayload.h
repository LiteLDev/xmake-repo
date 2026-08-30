#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CreativeGroupInfoPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk988fb2;
    ::ll::UntypedStorage<8, 32> mUnk9a4aba;
    ::ll::UntypedStorage<8, 64> mUnk5f16a7;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeGroupInfoPayload& operator=(CreativeGroupInfoPayload const&);
    CreativeGroupInfoPayload(CreativeGroupInfoPayload const&);
    CreativeGroupInfoPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CreativeGroupInfoPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
