#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"

// auto generated forward declare list
// clang-format off
class DBStorage;
class TaskGroup;
// clang-format on

namespace ClientBlobCache {

class Cache : public ::AppPlatformListener {
public:
    // Cache inner types define
    using Timestamp = ulong;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<DBStorage>> mDB;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<4, 40, std::mutex> mTimestampMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, ulong>> mTimestamps;
    ::ll::TypedStorage<8, 8, ulong> mBaseTimestamp;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCacheLoadingTime;
    ::ll::TypedStorage<4, 40, std::mutex> mValidatorMutex;
    ::ll::TypedStorage<8, 40, std::unordered_set<ulong>> mRequestedBlobIds;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mRecentlyReceivedBlobIds;
    // clang-format on
    // NOLINTEND
};

} // namespace ClientBlobCache
