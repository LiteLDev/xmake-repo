#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BarterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mItemOriginationActorUniqueID;
    ::ll::TypedStorage<2, 2, short>           mBarterItemId;
    ::ll::TypedStorage<1, 1, bool>            mExecuteTrade;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onBarterItemPickedUp(::Actor const&, ::ActorUniqueID, short);

    MCNAPI void stopBarter();
#else // @header-generator platform
    MCAPI void onBarterItemPickedUp(::Actor const& owner, ::ActorUniqueID actorUniqueID, short barterItemId);
#endif // @header-generator platform
    // NOLINTEND
};
