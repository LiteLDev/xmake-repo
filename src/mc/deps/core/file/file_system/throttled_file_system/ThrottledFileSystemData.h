#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/throttled_file_system/FlushOption.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Core { class DiskAccessTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core::Internal { class DataSegment; }
namespace Core::Internal { class EntryTable; }
namespace Core::Internal { class WriteQueue; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class ThrottledFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Internal::WriteQueue>> mWriteQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Internal::EntryTable>> mEntryTable;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                           mProcessingEvent;
    ::ll::TypedStorage<8, 8, ::Core::DiskAccessTracker&>                  mDiskAccessTracker;
    ::ll::TypedStorage<1, 1, bool>                                        mThrottleOverride;
    ::ll::UntypedStorage<8, 24>                                           mIgnoredThrottlePaths;
    ::ll::UntypedStorage<1, 140>                                          mIgnoredThrottlePathsMutex;
    ::ll::UntypedStorage<1, 140>                                          mMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                  mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkb5b57d;
    ::ll::UntypedStorage<8, 8>  mUnk409300;
    ::ll::UntypedStorage<1, 1>  mUnkbc305f;
    ::ll::UntypedStorage<8, 8>  mUnk7a38cb;
    ::ll::UntypedStorage<1, 1>  mUnk734119;
    ::ll::UntypedStorage<8, 16> mUnk372bdb;
    ::ll::UntypedStorage<8, 8>  mUnkda0843;
    ::ll::UntypedStorage<8, 8>  mUnka4e36b;
    ::ll::UntypedStorage<8, 8>  mUnk9dc18d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileSystemData& operator=(ThrottledFileSystemData const&);
    ThrottledFileSystemData(ThrottledFileSystemData const&);
    ThrottledFileSystemData();
};

} // namespace Core
