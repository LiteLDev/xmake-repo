#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/ConfigInfo.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/realms/CommitFilterOptions.h"
#include "mc/client/realms/RealmsCommit.h"
#include "mc/client/realms/RealmsCommitState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace Realms {

class RealmsCommits : public ::std::enable_shared_from_this<Realms::RealmsCommits> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<RealmsAPI>>        mRealmsAPI;
    ::ll::UntypedStorage<8, 48>                                  mIsConfigurableRealmEnvironment;
    ::ll::TypedStorage<8, 48, ::Realms::ConfigInfo>              mConfigInfo;
    ::ll::TypedStorage<8, 104, ::Realms::RealmsCommit>           mClientCommit;
    ::ll::TypedStorage<8, 104, ::Realms::RealmsCommit>           mMatchingCommit;
    ::ll::TypedStorage<8, 104, ::Realms::RealmsCommit>           mSelectedCommit;
    ::ll::TypedStorage<8, 24, std::vector<Realms::RealmsCommit>> mCommits;
    ::ll::TypedStorage<8, 24, std::vector<Realms::RealmsCommit>> mCommitsPage;
    ::ll::TypedStorage<1, 1, ::Realms::CommitFilterOptions>      mFilterOption;
    ::ll::TypedStorage<8, 24, std::string>                       mSearchQuery;
    ::ll::TypedStorage<4, 4, int>                                mPageFromIndex;
    ::ll::TypedStorage<4, 4, int>                                mPageToIndex;
    ::ll::UntypedStorage<4, 4>                                   mState;
    ::ll::UntypedStorage<8, 8>                                   mRealmsId;
    ::ll::UntypedStorage<8, 88>                                  mCommitsListPublisher;
    ::ll::UntypedStorage<8, 88>                                  mSelectedCommitPublisher;
    ::ll::UntypedStorage<8, 88>                                  mRealmsConfigCommitsPublisher;
    ::ll::UntypedStorage<8, 88>                                  mRealmsCommitsStatePublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsCommits();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsCommits(std::weak_ptr<RealmsAPI>, std::function<bool()>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& COMMITS_PER_PAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>, std::function<bool()>);
    // NOLINTEND
};

} // namespace Realms
