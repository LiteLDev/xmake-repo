#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class MemoryFileSystemEntryDir; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Core::FileType>                  mFileType;
    ::ll::TypedStorage<1, 1, bool>                              mRemoveOnNoOpenHandles;
    ::ll::TypedStorage<8, 8, ::Core::MemoryFileSystemEntryDir*> mpParentDir;
    ::ll::UntypedStorage<1, 152>                                mMutex;
    ::ll::UntypedStorage<8, 48>                                 mGetCurrentTime;
    ::ll::TypedStorage<8, 8, long>                              mTimestamp;
    ::ll::UntypedStorage<8, 24>                                 mName;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk3818cf;
    ::ll::UntypedStorage<1, 1>  mUnk47bbac;
    ::ll::UntypedStorage<8, 8>  mUnk41bf05;
    ::ll::UntypedStorage<8, 8>  mUnk6df038;
    ::ll::UntypedStorage<8, 64> mUnk905541;
    ::ll::UntypedStorage<8, 8>  mUnka2d20b;
    ::ll::UntypedStorage<8, 32> mUnk132bae;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryFileSystemEntry& operator=(MemoryFileSystemEntry const&);
    MemoryFileSystemEntry(MemoryFileSystemEntry const&);
#endif // @header-generator platform
    MemoryFileSystemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryFileSystemEntry() = default;

    virtual bool canRemove() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize() const = 0;
#else // @header-generator platform
    virtual uint64 getSize() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
