#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/client/social/XboxLiveUserProfileData.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class User; }
namespace Social { struct SocialChangeResult; }
// clang-format on

namespace Social {

class XboxLivePeopleHubList : public ::std::enable_shared_from_this<Social::XboxLivePeopleHubList> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                            mBoxedProfiles;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>> mPrimaryUser;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                         mIsLoading;
    ::ll::UntypedStorage<8, 88>                            mNotifyChangeSubscribers;
    ::ll::TypedStorage<4, 4, ::XboxAPICallResult>          mXboxAPICallResult;
    ::ll::TypedStorage<4, 4, int>                          mSocialChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLivePeopleHubList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XboxLivePeopleHubList();

    virtual void updateData() = 0;

    virtual void _processSocialChange(::Social::SocialChangeResult const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI XboxLivePeopleHubList(std::weak_ptr<Social::User>, std::string const&);

    MCNAPI void _clearProfiles();

    MCNAPI std::vector<Social::XboxLiveUserProfileData> getProfiles() const;

    MCNAPI ::XboxAPICallResult getXboxAPICallResult() const;

    MCNAPI bool isLoading() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerChangeListener(std::function<void()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Social::User>, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_processSocialChange(::Social::SocialChangeResult const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
