#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>                                        entryId;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Core::MemoryFileSystemEntry>> entry;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk8d6ff9;
        ::ll::UntypedStorage<8, 8> mUnk414e8e;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        MemoryFileSystemEntryItem& operator=(MemoryFileSystemEntryItem const&);
        MemoryFileSystemEntryItem(MemoryFileSystemEntryItem const&);
        MemoryFileSystemEntryItem();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mEntryItems;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk69424d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryFileSystemEntryDir& operator=(MemoryFileSystemEntryDir const&);
    MemoryFileSystemEntryDir(MemoryFileSystemEntryDir const&);
#endif // @header-generator platform
    MemoryFileSystemEntryDir();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRemove() const;
#else // @header-generator platform
    virtual uint64 getSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() const;
#else // @header-generator platform
    virtual bool canRemove() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
