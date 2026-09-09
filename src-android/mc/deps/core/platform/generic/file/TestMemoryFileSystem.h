#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystem.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct TestMemoryFileSystemData; }
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock {

class TestMemoryFileSystem : public ::Core::MemoryFileSystem {
public:
    // prevent constructor by default
    TestMemoryFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    virtual std::unique_ptr<Core::FileImpl> _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, ulong);
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
