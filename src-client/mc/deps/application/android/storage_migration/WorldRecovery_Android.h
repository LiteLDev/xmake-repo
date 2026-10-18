#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class WorldRecoveryAsyncResult; }
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

class WorldRecovery_Android : public ::Bedrock::WorldRecovery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                  mServiceRegistrationToken;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::WorldRecoveryAsyncResult>> mActiveHandle;
    ::ll::UntypedStorage<8, 24>                                                 mDestinationPath;
    ::ll::TypedStorage<8, 8, ::_jobject*>                                       mMigratorObject;
    ::ll::TypedStorage<8, 8, ::_jclass*>                                        mMigratorClass;
    ::ll::TypedStorage<8, 8, ::_jmethodID*>                                     mMigrateMethodID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldRecovery_Android();

    virtual void initialize();

    virtual std::tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription> doRecovery(std::string_view, std::function<void (const Bedrock::WorldRecovery::RecoveryUpdate&)>, ::Bedrock::PubSub::DeferralType);

    virtual ::Core::PathBuffer<std::string> const& getRecoveryDestinationPath() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldRecovery_Android();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::WorldRecoveryAsyncResult> getActiveAsyncResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI std::
        tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription>
            $doRecovery(
                std::string_view,
                std::function<void(const Bedrock::WorldRecovery::RecoveryUpdate&)>,
                ::Bedrock::PubSub::DeferralType
            );

    MCNAPI ::Core::PathBuffer<std::string> const& $getRecoveryDestinationPath() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
