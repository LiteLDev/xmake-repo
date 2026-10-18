#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/profiler/ProfileGroup.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/string/util/string_hash.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/SharedLock.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class ProfileGroup; }
namespace Util { struct string_hash; }
// clang-format on
#endif // @header-generator platform

namespace Core::Profile {

class ProfileGroupManager {
public:
    // ProfileGroupManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class Impl;
#else // @header-generator platform
#endif // @header-generator platform
    class Factory;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class Impl;
#endif // @header-generator platform
    // clang-format on

    // ProfileGroupManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class Factory {};

#endif // @header-generator platform
    class Impl {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // Impl inner types define
        using MapType = std::unordered_map<
            std::string,
            gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>,
            Util::string_hash,
            std::equal_to<void>,
            std::allocator<std::pair<const std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>>>>;
#else // @header-generator platform
        // Impl inner types declare
        // clang-format off
        struct StringCompare;
        // clang-format on
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using GroupLabelMapType = std::unordered_map<
            std::string,
            std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>,
            Util::string_hash,
            std::equal_to<void>,
            std::allocator<std::pair<
                const std::string,
                std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>>>>;

        using PublisherType = ::brstd::move_only_function<void(Core::Profile::ProfileGroup&)>;

        using MutexType = std::shared_timed_mutex;

        using Labels =
            std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>;

        using SharedLockType = ::Bedrock::Threading::SharedLock<std::shared_timed_mutex>;

        using LockType = ::Bedrock::Threading::LockGuard<std::shared_timed_mutex>;
#else // @header-generator platform
        // Impl inner types define
        struct StringCompare {};
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>>>>> mProfileGroupMap;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>>>>> mGroupLabelMap;
        ::ll::UntypedStorage<8, 64> mNewGroupPublisher;
        ::ll::UntypedStorage<1, 144> mMutex;
        ::ll::TypedStorage<8, 40, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>> mDefaultEmpty;
        ::ll::TypedStorage<8, 8, ulong> mTotalLabelCount;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnk381f0d;
        ::ll::UntypedStorage<8, 64> mUnk2af202;
        ::ll::UntypedStorage<8, 64> mUnk861ce2;
        ::ll::UntypedStorage<8, 8>  mUnkc68b28;
        ::ll::UntypedStorage<8, 64> mUnk3064b7;
        ::ll::UntypedStorage<8, 8>  mUnk504f10;
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
        MCNAPI ::Core::Profile::ProfileGroup& findOrCreate(std::string_view, uint);
#else // @header-generator platform
        MCNAPI ::Core::Profile::ProfileGroup* find(::std::string_view groupName);

        MCNAPI ::Core::Profile::ProfileGroup& findOrCreate(::std::string_view groupName, uint color);
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    class Factory {
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::Core::Profile::ProfileGroupManager make();
        // NOLINTEND
    };

    using GroupFn = std::function<void(Core::Profile::ProfileGroup&)>;

    using ConstGroupFn = std::function<void(const Core::Profile::ProfileGroup&)>;

    using LabelFn = std::function<void(std::string_view)>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Profile::ProfileGroupManager::Impl>> mImpl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk2c2558;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ::brstd::move_only_function<void(Core::Profile::ProfileGroup&)>& notifyOnNewGroup();

    MCNAPI ~ProfileGroupManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Profile::ProfileGroupManager& getSharedInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ProfileGroupManager& operator=(ProfileGroupManager const&);
    ProfileGroupManager(ProfileGroupManager const&);
    ProfileGroupManager();
#endif // @header-generator platform
};

} // namespace Core::Profile
