#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileHandle; }
namespace Core { class MemoryFileSystemEntryDir; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Core {

class MemoryFileSystemEntryFile : public ::Core::MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<char>>                    mData;
    ::ll::TypedStorage<8, 24, std::vector<Core::MemoryFileHandle*>> mOpenFiles;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk822d93;
    ::ll::UntypedStorage<8, 24> mUnk1f225d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryFileSystemEntryFile& operator=(MemoryFileSystemEntryFile const&);
    MemoryFileSystemEntryFile(MemoryFileSystemEntryFile const&);
#endif // @header-generator platform
    MemoryFileSystemEntryFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRemove() const;
#else // @header-generator platform
    virtual bool canRemove() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() const;
#else // @header-generator platform
    virtual uint64 getSize() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
