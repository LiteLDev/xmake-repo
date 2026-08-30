#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WebKey.h"
#include "mc/deps/certificates/MinecraftServiceKeysMetadata.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/options/DiscoveryEnvironment.h"
#include "mc/platform/brstd/future.h"
#include "mc/platform/brstd/promise.h"

// auto generated forward declare list
// clang-format off
class IMinecraftServiceKeySource;
struct MinecraftServiceKeyInfo;
namespace Bedrock::Http { struct Url; }
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class MinecraftServiceKeyManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // MinecraftServiceKeyManager inner types declare
    // clang-format off
    struct BlockingInitRecursiveContext;
    // clang-format on

    // MinecraftServiceKeyManager inner types define
    struct BlockingInitRecursiveContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> promise;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                                mTaskGroup;
    ::ll::TypedStorage<8, 8, std::atomic<long>>                                            mLastFetch;
    ::ll::UntypedStorage<1, 144>                                                           mDataMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, WebKey>>                     mServiceKeys;
    ::ll::TypedStorage<8, 40, std::optional<WebKey>>                                       mHostKey;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, WebKey>>                     mTrustedKeys;
    ::ll::TypedStorage<8, 24, std::string>                                                 mKeysIssuer;
    ::ll::TypedStorage<8, 8, long>                                                         mRoughTimeCorrectionSeconds;
    ::ll::TypedStorage<8, 24, std::string>                                                 mKeysEndpoint;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                            mBlockingInit;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IMinecraftServiceKeySource>>> mKeySource;
    ::ll::UntypedStorage<8, 48>                                                            mGetTime;
    ::ll::UntypedStorage<8, 48>                                                            mGetAuthServiceUrl;
    ::ll::UntypedStorage<8, 48>                                                            mGetKeysMetadata;
    ::ll::UntypedStorage<8, 48>                                                            mGetKeys;
    ::ll::UntypedStorage<8, 16>                                                            mOnKeysUpdatedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftServiceKeyManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftServiceKeyManager(std::unique_ptr<IMinecraftServiceKeySource>);

    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> _fullFetch(bool);

    MCNAPI void _updateTrustedKeys();

    MCNAPI std::string const& getIssuer() const;

    MCNAPI ::MinecraftServiceKeyInfo getKeyInfo() const;

    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> getKeysIfWeDontAlreadyHaveThem();

    MCNAPI long getRoughTimeCorrectionSeconds() const;

    MCNAPI bool hasRetrievedTrustedKeys() const;

    MCNAPI void init();

    MCNAPI bool onTick();

    MCNAPI void setHostKey(std::string const&, ::Crypto::Asymmetric::System);

    MCNAPI std::optional<WebKey> tryGetKey(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> updateKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<IMinecraftServiceKeySource>);
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
