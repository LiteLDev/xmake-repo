#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EduSharedUriResource.h"

struct EduUriResourcePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::EduSharedUriResource> mEduSharedUriResource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduUriResourcePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource> mEduSharedUriResource;
#endif // @header-generator platform
    // NOLINTEND
};
