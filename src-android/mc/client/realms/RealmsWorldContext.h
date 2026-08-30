#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Realms {

class RealmsWorldContext : public ::std::enable_shared_from_this<Realms::RealmsWorldContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                         mStateChangedPublisher;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsAPI;
    ::ll::UntypedStorage<4, 4>                          mState;
    ::ll::UntypedStorage<8, 8>                          mCurrentRealmId;
    ::ll::UntypedStorage<8, 88>                         mRealmIdChangedPublisher;
    ::ll::TypedStorage<8, 608, ::Realms::World>         mRealmsWorld;
    ::ll::TypedStorage<8, 24, std::string>              mCorrelationId;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchRealmsWorld(::Realms::RealmId, bool);

    MCNAPI ::Realms::RealmId getCurrentRealmId() const;

    MCNAPI ::Realms::World getRealmsWorld() const;

    MCNAPI ::Realms::RealmsWorldContextState getState() const;

    MCNAPI void overrideRealmsWorld(::Realms::World const&, bool);

    MCNAPI void refreshWorld(::Realms::RealmId);

    MCNAPI void reset();

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToStateChangedPublisher(std::function<void(Realms::RealmsWorldContextState)>);
    // NOLINTEND
};

} // namespace Realms
