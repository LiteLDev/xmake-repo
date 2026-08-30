#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileSystemEntryDir : public ::Core::MemoryFileSystemEntry {
public:
    // MemoryFileSystemEntryDir inner types declare
    // clang-format off
    struct MemoryFileSystemEntryItem;
    // clang-format on

    // MemoryFileSystemEntryDir inner types define
    struct MemoryFileSystemEntryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                        entryId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::MemoryFileSystemEntry>> entry;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mEntryItems;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntryDir();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canRemove() const;

    virtual ulong getSize() const;
    // NOLINTEND
};

} // namespace Core
