#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

class WorldRecovery : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<Bedrock::WorldRecovery> {
public:
    // WorldRecovery inner types declare
    // clang-format off
    struct RecoveryResult;
    struct RecoveryUpdate;
    // clang-format on

    // WorldRecovery inner types define
    struct RecoveryResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mError;
        ::ll::TypedStorage<8, 24, std::string> mDestPath;
        ::ll::TypedStorage<8, 8, ulong>        mBytesNeeded;
        ::ll::TypedStorage<8, 8, ulong>        mBytesAvailable;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecoveryResult& operator=(RecoveryResult const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RecoveryResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RecoveryUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mStatus;
        ::ll::TypedStorage<4, 4, uint>         mFilesTotal;
        ::ll::TypedStorage<4, 4, uint>         mFilesCompleted;
        ::ll::TypedStorage<8, 8, ulong>        mBytesTotal;
        ::ll::TypedStorage<8, 8, ulong>        mBytesCompleted;
        // NOLINTEND

    public:
        // prevent constructor by default
        RecoveryUpdate& operator=(RecoveryUpdate const&);
    };

    using RecoveryUpdateFn = std::function<void(const Bedrock::WorldRecovery::RecoveryUpdate&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldRecovery() = default;

    virtual void initialize() = 0;

    virtual std::tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription> doRecovery(std::string_view, std::function<void (const Bedrock::WorldRecovery::RecoveryUpdate&)>, ::Bedrock::PubSub::DeferralType) = 0;

    virtual ::Core::PathBuffer<std::string> const& getRecoveryDestinationPath() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
