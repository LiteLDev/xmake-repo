#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/FullContainerName.h"

struct ContainerValidationSlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName> mContainerEnumName;
    ::ll::TypedStorage<4, 4, int>                  mSlotIndex;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerValidationSlotData();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerValidationSlotData(std::string, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ContainerValidationSlotData(::std::string containerEnumNameString, int slotIndex);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ContainerValidationSlotData const& AUTOPLACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string containerEnumNameString, int slotIndex);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
