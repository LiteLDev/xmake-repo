#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileAccessType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/Result.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { struct TestMemoryFileSystemData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class MemoryFileSystemEntryFile; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class PathView; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class TestMemoryFileSystem : public ::Core::MemoryFileSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TestMemoryFileSystem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();
#else // @header-generator platform
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Core::FileImpl> _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, ulong);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::Core::FileImpl>
    _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, uint64) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
