#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class ReceivedFriendRequestsList; }
// clang-format on

#else // @header-generator platform
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
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class ReceivedFriendRequestsList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ReceivedFriendRequestsQuery : public ::OreUI::QueryBase<OreUI::ReceivedFriendRequestsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                                                   mIsLoading;
    ::ll::UntypedStorage<8, 104>                                                   mRequests;
    ::ll::UntypedStorage<8, 152>                                                   mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReceivedFriendRequestsListSubscriber;
    ::ll::UntypedStorage<8, 24>                                mResourceAllowList;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedFriendRequestsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceivedFriendRequestsQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ReceivedFriendRequestsQuery(::OreUI::GameDependencies const&);

    MCNAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ReceivedFriendRequestsQuery : public ::OreUI::QueryBase<::OreUI::ReceivedFriendRequestsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsLoading;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::AddFriendObject, ::std::allocator<::OreUI::AddFriendObject>>>
                                                                                       mRequests;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::XboxAPICallResult>>                 mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReceivedFriendRequestsListSubscriber;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedFriendRequestsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReceivedFriendRequestsQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};
#else // @header-generator platform
class ReceivedFriendRequestsQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
