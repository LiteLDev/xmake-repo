#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ItemStackResponseSlotInfo.h"
#include "mc/world/containers/FullContainerName.h"

struct ItemStackResponseContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::FullContainerName>                    mFullContainerName;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseSlotInfo>> mSlots;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackResponseContainerInfo(::FullContainerName const&);

    MCNAPI bool operator==(::ItemStackResponseContainerInfo const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FullContainerName const&);
    // NOLINTEND
};
