#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileHandle.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { struct TestMemoryFileSystemData; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileSystem; }
namespace Core { class MemoryFileSystemEntryFile; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryFileHandle : public ::Core::MemoryFileHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::TestMemoryFileSystemData>> mData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk560fe9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TestMemoryFileHandle& operator=(TestMemoryFileHandle const&);
    TestMemoryFileHandle(TestMemoryFileHandle const&);
#endif // @header-generator platform
    TestMemoryFileHandle();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _write(void const*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _write(void const*, uint64) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
