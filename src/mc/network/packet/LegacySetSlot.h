#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct LegacySetSlot {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerEnumName> mContainerEnum;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mSlots;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>   mContainerEnum;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~LegacySetSlot();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
