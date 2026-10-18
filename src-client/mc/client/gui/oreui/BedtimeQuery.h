#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla_gameplay/ChatAvailability.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

namespace OreUI {

class BedtimeQuery : public ::OreUI::QueryBase<OreUI::BedtimeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>             mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsTrial;
    ::ll::UntypedStorage<8, 152>                               mSleepingPlayerCount;
    ::ll::UntypedStorage<8, 152>                               mRequiredSleepingPlayerCount;
    ::ll::UntypedStorage<8, 152>                               mChatAvailability;
    ::ll::UntypedStorage<8, 152>                               mRemotePlayersCount;
    ::ll::UntypedStorage<8, 152>                               mIsAbleToSleep;
    ::ll::UntypedStorage<8, 152>                               mCanChangeSleepSettings;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
