#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class BootstrapConfig; }
namespace Bedrock::JSONObject { class ObjectNode; }
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
        // Impl inner types define
        using PendingCategories = std::unordered_map<std::string, uchar>;

        using MutexType = std::mutex;

        using LockType = ::Bedrock::Threading::LockGuard<std::mutex>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                    mCategoryConfigurationIsValid;
        ::ll::TypedStorage<1, 1, uchar>                                   mDefaultFlags;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, uchar>> mPendingCategories;
        ::ll::TypedStorage<4, 40, std::mutex>                             mPendingCategoriesMutex;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mNewCategorySubscription;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void init(::Core::Profile::ProfileGroupManager&, ::Bedrock::JSONObject::ObjectNode const&);

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
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProfilingConfigManager::Impl>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfilingConfigManager();

    MCNAPI void init(::Core::Profile::ProfileGroupManager&, ::Bedrock::JSONObject::ObjectNode const&);

    MCNAPI ~ProfilingConfigManager();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
