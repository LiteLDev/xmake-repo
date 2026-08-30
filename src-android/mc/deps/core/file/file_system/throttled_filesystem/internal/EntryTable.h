#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class ThrottledFileSystemData; }
namespace Core::Internal { class DirectoryData; }
namespace Core::Internal { class FileData; }
// clang-format on

namespace Core::Internal {

class EntryTable {
public:
    // EntryTable inner types declare
    // clang-format off
    class QueuedRemovalRefCounter;
    // clang-format on

    // EntryTable inner types define
    class QueuedRemovalRefCounter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Core::Internal::EntryTable&> mEntryTable;
        ::ll::UntypedStorage<8, 24>                             mPath;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedRemovalRefCounter& operator=(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter();
    };

    using RenameList = std::vector<std::pair<Core::PathBuffer<std::string>, Core::PathBuffer<std::string>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mFiles;
    ::ll::UntypedStorage<8, 24> mDirectories;
    ::ll::UntypedStorage<8, 24> mPendingRenames;
    ::ll::UntypedStorage<8, 24> mPathQueuedRemovalCount;
    // NOLINTEND
};

} // namespace Core::Internal
