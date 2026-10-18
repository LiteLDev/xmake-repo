#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/WebKey.h"
#include "mc/deps/certificates/MinecraftServiceKeysMetadata.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/crypto/asymmetric/system/System.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/DiscoveryEnvironment.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/future.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/promise.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IMinecraftServiceKeySource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class TaskGroup;
class WebKey;
#endif // @header-generator platform
struct MinecraftServiceKeyInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MinecraftServiceKeysMetadata;
#endif // @header-generator platform
namespace Bedrock::Http { struct Url; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> promise;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk1d5c9f;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        BlockingInitRecursiveContext& operator=(BlockingInitRecursiveContext const&);
        BlockingInitRecursiveContext(BlockingInitRecursiveContext const&);
        BlockingInitRecursiveContext();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 336> mUnkeed942;
    ::ll::UntypedStorage<8, 8>   mUnkb1e41f;
    ::ll::UntypedStorage<8, 8>   mUnkd5789e;
    ::ll::UntypedStorage<8, 64>  mUnkef6aa1;
    ::ll::UntypedStorage<8, 48>  mUnk5a4b2b;
    ::ll::UntypedStorage<8, 64>  mUnk72453e;
    ::ll::UntypedStorage<8, 32>  mUnk3164ca;
    ::ll::UntypedStorage<8, 8>   mUnkd6fb1a;
    ::ll::UntypedStorage<8, 32>  mUnk60bc56;
    ::ll::UntypedStorage<1, 1>   mUnk349f6c;
    ::ll::UntypedStorage<8, 8>   mUnk227437;
    ::ll::UntypedStorage<8, 64>  mUnk65f124;
    ::ll::UntypedStorage<8, 64>  mUnkc82f81;
    ::ll::UntypedStorage<8, 64>  mUnka7fbba;
    ::ll::UntypedStorage<8, 64>  mUnk9aef44;
    ::ll::UntypedStorage<8, 8>   mUnka7c2a2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MinecraftServiceKeyManager& operator=(MinecraftServiceKeyManager const&);
    MinecraftServiceKeyManager(MinecraftServiceKeyManager const&);
#endif // @header-generator platform
    MinecraftServiceKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftServiceKeyManager();
#else // @header-generator platform
    virtual ~MinecraftServiceKeyManager() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MinecraftServiceKeyManager(std::unique_ptr<IMinecraftServiceKeySource>);
#else // @header-generator platform
    MCNAPI MinecraftServiceKeyManager(
        ::std::unique_ptr<::IMinecraftServiceKeySource>                                                 keySource,
        ::std::function<int64()>                                                                        timeFn,
        ::std::function<::Bedrock::Threading::Async<::Bedrock::Http::Url>()>                            urlFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::MinecraftServiceKeysMetadata>>(::TaskGroup&, ::std::string const&, bool)> metadataFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::std::unordered_map<::std::string, ::WebKey>>>(::TaskGroup&, ::std::string const&, bool)>
            keysFn
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> _fullFetch(bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void _blockingInitRecursive(
        ::MinecraftServiceKeyInfo                                                     keyFetchResult,
        ::std::shared_ptr<::MinecraftServiceKeyManager::BlockingInitRecursiveContext> context
    );
#endif

    MCNAPI ::Bedrock::Threading::Async<::MinecraftServiceKeyInfo> _fullFetch(bool highPriority);
#endif // @header-generator platform

    MCNAPI void _updateTrustedKeys();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getIssuer() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::brstd::future<bool> blockingInit();
#endif
#endif // @header-generator platform

    MCNAPI ::MinecraftServiceKeyInfo getKeyInfo() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> getKeysIfWeDontAlreadyHaveThem();

    MCNAPI long getRoughTimeCorrectionSeconds() const;

    MCNAPI bool hasRetrievedTrustedKeys() const;

    MCNAPI void init();
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::MinecraftServiceKeyInfo> getKeysIfWeDontAlreadyHaveThem();
#endif // @header-generator platform

    MCNAPI bool onTick();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setHostKey(std::string const&, ::Crypto::Asymmetric::System);
#else // @header-generator platform
    MCNAPI void setHostKey(::std::string const& hostKey, ::Crypto::Asymmetric::System type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<WebKey> tryGetKey(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::WebKey> tryGetKey(::std::string const& kid) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<MinecraftServiceKeyInfo> updateKeys();
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<::MinecraftServiceKeyInfo> updateKeys();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IMinecraftServiceKeySource>                                                 keySource,
        ::std::function<int64()>                                                                        timeFn,
        ::std::function<::Bedrock::Threading::Async<::Bedrock::Http::Url>()>                            urlFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::MinecraftServiceKeysMetadata>>(::TaskGroup&, ::std::string const&, bool)> metadataFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::std::unordered_map<::std::string, ::WebKey>>>(::TaskGroup&, ::std::string const&, bool)>
            keysFn
    );
#endif // @header-generator platform
    // NOLINTEND
};
