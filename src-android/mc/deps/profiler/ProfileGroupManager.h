#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ProfileGroup.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/platform/string/util/string_hash.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/SharedLock.h"

namespace Core::Profile {

class ProfileGroupManager {
public:
    // ProfileGroupManager inner types declare
    // clang-format off
    class Impl;
    class Factory;
    // clang-format on

    // ProfileGroupManager inner types define
    class Impl {
    public:
        // Impl inner types define
        using MapType = std::unordered_map<
            std::string,
            gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>,
            Util::string_hash,
            std::equal_to<void>,
            std::allocator<std::pair<const std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>>>>;

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

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, gsl::not_null<std::unique_ptr<Core::Profile::ProfileGroup>>>>>> mProfileGroupMap;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>>>>> mGroupLabelMap;
        ::ll::UntypedStorage<8, 64> mNewGroupPublisher;
        ::ll::UntypedStorage<1, 144> mMutex;
        ::ll::TypedStorage<8, 40, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>> mDefaultEmpty;
        ::ll::TypedStorage<8, 8, ulong> mTotalLabelCount;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Core::Profile::ProfileGroup& findOrCreate(std::string_view, uint);
        // NOLINTEND
    };

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Profile::ProfileGroupManager::Impl>> mImpl;
    // NOLINTEND

public:
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
};

} // namespace Core::Profile
