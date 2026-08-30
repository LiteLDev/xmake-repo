#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core::Internal { class DataSegment; }
// clang-format on

namespace Core::Internal {

class FileData {
public:
    // FileData inner types define
    using OpenFileFunc = std::function<Bedrock::Result<void, std::error_code>(
        std::unique_ptr<Core::FileSystemImpl>&,
        std::unique_ptr<Core::FileImpl>&,
        Core::PathView,
        Core::FileOpenMode
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                     mSegments;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>>       mFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mFileSystem;
    ::ll::UntypedStorage<8, 48>                                     mOnWriteCallback;
    ::ll::UntypedStorage<8, 48>                                     mOnCloseCallback;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                     mOpenCount;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                 mLastKnownDiskSize;
    ::ll::TypedStorage<8, 8, long>                                  mCreatedTime;
    ::ll::TypedStorage<8, 8, long>                                  mModifiedTime;
    ::ll::TypedStorage<1, 1, bool>                                  mBinary;
    ::ll::TypedStorage<1, 1, bool>                                  mTruncate;
    ::ll::UntypedStorage<1, 2>                                      mReadOnly;
    ::ll::UntypedStorage<1, 148>                                    mFileMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    FileData();
};

} // namespace Core::Internal
