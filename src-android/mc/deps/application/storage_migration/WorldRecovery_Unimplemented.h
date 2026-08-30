#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

class WorldRecovery_Unimplemented : public ::Bedrock::WorldRecovery {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual void initialize();

    virtual std::tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription> doRecovery(std::string_view, std::function<void (const Bedrock::WorldRecovery::RecoveryUpdate&)>, ::Bedrock::PubSub::DeferralType);

    virtual ::Core::PathBuffer<std::string> const& getRecoveryDestinationPath() const;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
