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
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class ReceivedFriendRequestsList; }
// clang-format on

namespace OreUI {

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

} // namespace OreUI
