#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileHandle; }
namespace Core { class MemoryFileSystemEntryDir; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileSystemEntryFile : public ::Core::MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<char>>                    mData;
    ::ll::TypedStorage<8, 24, std::vector<Core::MemoryFileHandle*>> mOpenFiles;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntryFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canRemove() const;

    virtual ulong getSize() const;
    // NOLINTEND
};

} // namespace Core
