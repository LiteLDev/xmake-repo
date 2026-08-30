#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool addKeepOnDeath(::ItemStackBase&, ::Json::Value const&);

    MCNAPI static void appendItemLockPopupNoticeText(std::string&, ::ItemStackBase const&);

    MCNAPI static bool canDropItem(::Actor const&, ::ItemStackBase const&);

    MCNAPI static bool canMoveItemSlots(::Actor const&, ::ItemStackBase const&);

    MCNAPI static bool canPlayerDropItem(::ItemStackBase const&);

    MCNAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const&);

    MCNAPI static bool isItemLocked(::ItemStackBase const&);

    MCNAPI static bool isItemLockedInSlot(::ItemStackBase const&);

    MCNAPI static void setItemLockMode(::ItemStackBase&, ::ItemLockMode);

    MCNAPI static void setKeepOnDeath(::ItemStackBase&, bool);

    MCNAPI static bool shouldKeepOnDeath(::ItemStackBase const&);

    MCNAPI static bool shouldKeepOnDeath(::Actor const&, ::ItemStackBase const&);
    // NOLINTEND
};
