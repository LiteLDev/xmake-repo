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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual void initialize();
#else // @header-generator platform
    virtual void initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription> doRecovery(std::string_view, std::function<void (const Bedrock::WorldRecovery::RecoveryUpdate&)>, ::Bedrock::PubSub::DeferralType);
#else // @header-generator platform
    virtual ::std::tuple<
        ::Bedrock::Threading::Async<::Bedrock::WorldRecovery::RecoveryResult>,
        ::Bedrock::PubSub::DeferredSubscription>
        doRecovery(
            ::std::string_view,
            ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
            ::Bedrock::PubSub::DeferralType
        ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getRecoveryDestinationPath() const;
    // clang-format on
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getRecoveryDestinationPath() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $initialize();

    MCNAPI ::std::tuple<
        ::Bedrock::Threading::Async<::Bedrock::WorldRecovery::RecoveryResult>,
        ::Bedrock::PubSub::DeferredSubscription>
        $doRecovery(
            ::std::string_view,
            ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
            ::Bedrock::PubSub::DeferralType
        );

    MCNAPI ::Core::PathBuffer<::std::string> const& $getRecoveryDestinationPath() const;
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
