#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MappedPorts {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> mInternalPort;
    ::ll::TypedStorage<2, 2, ushort> mExternalPort;
    ::ll::TypedStorage<2, 2, ushort> mLength;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnked9ea7;
    ::ll::UntypedStorage<2, 2> mUnkf404a5;
    ::ll::UntypedStorage<2, 2> mUnk372384;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MappedPorts& operator=(MappedPorts const&);
    MappedPorts(MappedPorts const&);
    MappedPorts();
#endif // @header-generator platform
};
