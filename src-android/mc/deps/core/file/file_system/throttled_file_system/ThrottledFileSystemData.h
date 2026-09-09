#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace Core {

class ThrottledFileSystemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Internal::WriteQueue>> mWriteQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::Internal::EntryTable>> mEntryTable;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                           mProcessingEvent;
    ::ll::TypedStorage<8, 8, ::Core::DiskAccessTracker&>                  mDiskAccessTracker;
    ::ll::TypedStorage<1, 1, bool>                                        mThrottleOverride;
    ::ll::UntypedStorage<8, 24>                                           mIgnoredThrottlePaths;
    ::ll::UntypedStorage<1, 140>                                          mIgnoredThrottlePathsMutex;
    ::ll::UntypedStorage<1, 140>                                          mMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                  mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileSystemData& operator=(ThrottledFileSystemData const&);
    ThrottledFileSystemData(ThrottledFileSystemData const&);
    ThrottledFileSystemData();
};

} // namespace Core
