#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class ThrottledFileSystemData; }
namespace Core::Internal { class DirectoryData; }
namespace Core::Internal { class FileData; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Core::Internal::EntryTable&> mEntryTable;
        ::ll::UntypedStorage<8, 24>                             mPath;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk8d885f;
        ::ll::UntypedStorage<8, 32> mUnk205102;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedRemovalRefCounter& operator=(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter(QueuedRemovalRefCounter const&);
        QueuedRemovalRefCounter();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using RenameList = std::vector<std::pair<Core::PathBuffer<std::string>, Core::PathBuffer<std::string>>>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mFiles;
    ::ll::UntypedStorage<8, 24> mDirectories;
    ::ll::UntypedStorage<8, 24> mPendingRenames;
    ::ll::UntypedStorage<8, 24> mPathQueuedRemovalCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc28a95;
    ::ll::UntypedStorage<8, 16> mUnka0330b;
    ::ll::UntypedStorage<8, 24> mUnka2c199;
    ::ll::UntypedStorage<8, 16> mUnkbfc75d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntryTable& operator=(EntryTable const&);
    EntryTable(EntryTable const&);
    EntryTable();
#endif // @header-generator platform
};

} // namespace Core::Internal
