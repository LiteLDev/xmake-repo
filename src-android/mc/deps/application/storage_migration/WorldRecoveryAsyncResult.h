#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"
#include "mc/deps/core/utility/pub_sub/DeferredPublisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock {

class WorldRecoveryAsyncResult : public ::Bedrock::Threading::AsyncResultBase<Bedrock::WorldRecovery::RecoveryResult> {
public:
    // WorldRecoveryAsyncResult inner types define
    using PublisherType = ::Bedrock::PubSub::DeferredPublisher<
        void(const Bedrock::WorldRecovery::RecoveryUpdate&),
        (Bedrock::PubSub::DeferralType)0,
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        false,
        false>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldRecoveryAsyncResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
