#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/packet/ItemStackResponseSlotInfo.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/ItemStackResponseSlotInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/containers/FullContainerName.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ItemStackResponseSlotInfo;
// clang-format on
#endif // @header-generator platform

struct ItemStackResponseContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName>                    mFullContainerName;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseSlotInfo>> mSlots;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::FullContainerName>                        mFullContainerName;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseSlotInfo>> mSlots;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStackResponseContainerInfo(::FullContainerName const&);

    MCNAPI bool operator==(::ItemStackResponseContainerInfo const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FullContainerName const&);
#else // @header-generator platform
    MCAPI bool operator==(::ItemStackResponseContainerInfo const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND
};
