#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class BootstrapConfig; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class ObjectNode; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace Core::Profile { class ProfileGroupManager; }
// clang-format on

class ProfilingConfigManager {
public:
    // ProfilingConfigManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // ProfilingConfigManager inner types define
    class Impl {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // Impl inner types define
        using PendingCategories = std::unordered_map<std::string, uchar>;

        using MutexType = std::mutex;

        using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                    mCategoryConfigurationIsValid;
        ::ll::TypedStorage<1, 1, uchar>                                   mDefaultFlags;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, uchar>> mPendingCategories;
        ::ll::TypedStorage<4, 40, std::mutex>                             mPendingCategoriesMutex;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mNewCategorySubscription;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnk53d76a;
        ::ll::UntypedStorage<1, 1>  mUnk232378;
        ::ll::UntypedStorage<8, 64> mUnkf8bb1c;
        ::ll::UntypedStorage<8, 80> mUnk272e6e;
        ::ll::UntypedStorage<8, 16> mUnkd2661b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void init(::Core::Profile::ProfileGroupManager&, ::Bedrock::JSONObject::ObjectNode const&);
#else // @header-generator platform
        MCNAPI void init(
            ::Core::Profile::ProfileGroupManager&    profileGroupManager,
            ::Bedrock::JSONObject::ObjectNode const& profileObject
        );
#endif // @header-generator platform

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProfilingConfigManager::Impl>> mImpl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkdd6a6c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ProfilingConfigManager& operator=(ProfilingConfigManager const&);
    ProfilingConfigManager(ProfilingConfigManager const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfilingConfigManager();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void init(::Core::Profile::ProfileGroupManager&, ::Bedrock::JSONObject::ObjectNode const&);

    MCNAPI ~ProfilingConfigManager();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::JSONObject::ObjectNode const* getProfileObjectFromBootstrapConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
