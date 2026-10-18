#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/network/realms/ServerSettings.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsServerSettingsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::TypedStorage<8, 240, ::TaskGroup>             mTaskGroup;
    ::ll::TypedStorage<4, 56, ::Realms::ServerSettings> mRealmsServerSettings;
    ::ll::TypedStorage<4, 4, uint>                      mRealmsFetchCorrelationId;
    ::ll::UntypedStorage<8, 88>                         mRealmsServerSettingsChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> fetchRealmsServerSettings(::Realms::RealmId);

    MCNAPI ::Realms::ServerSettings getRealmsServerSettings() const;

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> setRealmsMaxPlayers(::Realms::RealmId, int);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> setRealmsRenderDistance(::Realms::RealmId, int);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus>
        setRealmsServerMode(::Realms::RealmId, ::Realms::RealmsServerMode);

    MCNAPI ::Bedrock::Threading::Async<Realms::GenericStatus> setRealmsSimDistance(::Realms::RealmId, int);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRealmsServerSettingsChangedPublisher(std::function<void()>);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsServerSettingsManager {};
#endif // @header-generator platform

} // namespace Realms
