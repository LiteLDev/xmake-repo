#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileHandle.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct TestMemoryFileSystemData; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileSystem; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryFileHandle : public ::Core::MemoryFileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::TestMemoryFileSystemData>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    TestMemoryFileHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Result _write(void const*, ulong);
    // NOLINTEND
};

} // namespace Bedrock
