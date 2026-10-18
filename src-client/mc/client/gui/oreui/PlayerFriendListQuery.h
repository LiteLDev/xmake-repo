#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
namespace OreUI { class IResourceAllowList; }
namespace Social { class PlayerFriendList; }
// clang-format on

namespace OreUI {

class PlayerFriendListQuery : public ::OreUI::QueryBase<OreUI::PlayerFriendListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                                         mIsLoading;
    ::ll::UntypedStorage<8, 104>                                         mFriends;
    ::ll::UntypedStorage<8, 152>                                         mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::PlayerFriendList>> mPlayerFriendList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPlayerFriendListSubscriber;
    ::ll::UntypedStorage<8, 24>                                          mResourceAllowList;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
