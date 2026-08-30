#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class MemoryFileSystemEntryDir; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Core::FileType>                  mFileType;
    ::ll::TypedStorage<1, 1, bool>                              mRemoveOnNoOpenHandles;
    ::ll::TypedStorage<8, 8, ::Core::MemoryFileSystemEntryDir*> mpParentDir;
    ::ll::UntypedStorage<1, 152>                                mMutex;
    ::ll::UntypedStorage<8, 48>                                 mGetCurrentTime;
    ::ll::TypedStorage<8, 8, long>                              mTimestamp;
    ::ll::UntypedStorage<8, 24>                                 mName;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryFileSystemEntry() = default;

    virtual bool canRemove() const = 0;

    virtual ulong getSize() const = 0;
    // NOLINTEND
};

} // namespace Core
