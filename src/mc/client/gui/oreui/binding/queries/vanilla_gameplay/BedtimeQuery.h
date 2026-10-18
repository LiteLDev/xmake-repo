#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/vanilla_gameplay/ChatAvailability.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class BedtimeQuery : public ::OreUI::QueryBase<::OreUI::BedtimeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>                           mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mLocalPlayerSubscription;
    ::ll::TypedStorage<1, 1, bool>                                           mIsTrial;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                       mSleepingPlayerCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                       mRequiredSleepingPlayerCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::ChatAvailability>> mChatAvailability;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                       mRemotePlayersCount;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                      mIsAbleToSleep;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                      mCanChangeSleepSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    BedtimeQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BedtimeQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class BedtimeQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
