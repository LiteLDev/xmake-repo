#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Safety { class RedactableString; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

class ItemLockHelper {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
    LLNDAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);
#endif

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool addKeepOnDeath(::ItemStackBase&, ::Json::Value const&);
#else // @header-generator platform
    MCAPI static bool addKeepOnDeath(::ItemStackBase& item, ::Json::Value const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void appendItemLockPopupNoticeText(std::string&, ::ItemStackBase const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    appendItemLockPopupNoticeText(::std::string& formattedPopupNoticeText, ::ItemStackBase const& item);

    MCAPI static bool canDropItem(::Actor const& actor, ::ItemStackBase const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canDropItem(::Actor const&, ::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool canMoveItemSlots(::Actor const& actor, ::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canMoveItemSlots(::Actor const&, ::ItemStackBase const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canPlayerDropItem(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool isItemLocked(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemLockMode getItemLockMode(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static void setItemLockMode(::ItemStackBase& item, ::ItemLockMode lockMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isItemLocked(::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool shouldKeepOnDeath(::ItemStackBase const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isItemLockedInSlot(::ItemStackBase const&);

    MCNAPI static void setItemLockMode(::ItemStackBase&, ::ItemLockMode);

    MCNAPI static void setKeepOnDeath(::ItemStackBase&, bool);

    MCNAPI static bool shouldKeepOnDeath(::ItemStackBase const&);

    MCNAPI static bool shouldKeepOnDeath(::Actor const&, ::ItemStackBase const&);
#else // @header-generator platform
    MCAPI static bool shouldKeepOnDeath(::Actor const& actor, ::ItemStackBase const& item);
#endif // @header-generator platform
    // NOLINTEND
};
