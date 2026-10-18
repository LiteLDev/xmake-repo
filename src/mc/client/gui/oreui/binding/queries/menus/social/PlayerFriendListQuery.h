#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AddFriendObject; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class PlayerFriendList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class PlayerFriendListQuery : public ::OreUI::QueryBase<::OreUI::PlayerFriendListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsLoading;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::AddFriendObject, ::std::allocator<::OreUI::AddFriendObject>>>
                                                                                          mFriends;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::XboxAPICallResult>>                    mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::PlayerFriendList>>              mPlayerFriendList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPlayerFriendListSubscriber;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFriendListQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerFriendListQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::std::string const&               xuid
    );

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client, ::std::string const& xuid);
    // NOLINTEND
};
#else // @header-generator platform
class PlayerFriendListQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
