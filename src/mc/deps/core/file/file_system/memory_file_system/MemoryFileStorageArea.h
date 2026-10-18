#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class MemoryFileSystem; }
// clang-format on

#endif // @header-generator platform
namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class MemoryFileStorageArea {};
#else // @header-generator platform
class MemoryFileStorageArea : public ::Core::BasicDirectoryStorageArea<::Core::MemoryFileSystem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39293d;
    ::ll::UntypedStorage<8, 64> mUnkb0fa7e;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileStorageArea& operator=(MemoryFileStorageArea const&);
    MemoryFileStorageArea(MemoryFileStorageArea const&);
    MemoryFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Core
