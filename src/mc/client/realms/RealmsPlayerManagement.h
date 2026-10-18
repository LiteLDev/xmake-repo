#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/realms/ManageMembersStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms::Stories { class FacetStateManager; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsPlayerManagement : public ::std::enable_shared_from_this<Realms::RealmsPlayerManagement> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                    mUserManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                            mRealmsAPI;
    ::ll::TypedStorage<4, 4, ::Realms::ManageMembersStatus>                        mManagePlayerStatus;
    ::ll::UntypedStorage<8, 88> mRealmsPlayerManagementChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerManagement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearManageMembersStatus();

    MCNAPI ::Realms::ManageMembersStatus getManageMembersStatus() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        registerRealmsPlayerManagementUpdated(std::function<void(Realms::ManageMembersStatus)>);

    MCNAPI void removePlayerFromRealm(std::string const, std::string const, bool const);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsPlayerManagement {};
#endif // @header-generator platform

} // namespace Realms
