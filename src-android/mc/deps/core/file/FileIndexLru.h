#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileIndexLru
: public ::Bedrock::EnableNonOwnerReferences,
  public ::Core::LRUCache<Core::PathBuffer<std::string>, std::nullptr_t, std::shared_ptr<std::nullptr_t>> {
public:
    // FileIndexLru inner types declare
    // clang-format off
    struct PriorityQueueElement;
    // clang-format on

    // FileIndexLru inner types define
    struct PriorityQueueElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, long>  mFileIndex;
        ::ll::TypedStorage<8, 8, ulong> mFileSize;
        ::ll::UntypedStorage<8, 24>     mTruePath;
        ::ll::UntypedStorage<8, 24>     mOnDiskPath;
        // NOLINTEND

    public:
        // prevent constructor by default
        PriorityQueueElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mAccess;
    ::ll::UntypedStorage<8, 40>                     mFilePathToIndexedFilePath;
    ::ll::UntypedStorage<8, 40>                     mIndexedFilePathToFilePath;
    ::ll::UntypedStorage<8, 40>                     mFileEvictDeleteMap;
    ::ll::TypedStorage<8, 8, ulong>                 mRollingIndex;
    ::ll::UntypedStorage<8, 24>                     mIgnoredFilePaths;
    // NOLINTEND

public:
    // prevent constructor by default
    FileIndexLru();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const& sFileIndexSeparator();
    // NOLINTEND
};

} // namespace Core
