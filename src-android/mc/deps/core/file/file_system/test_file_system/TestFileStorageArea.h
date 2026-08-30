#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock {

struct TestFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mArea;
    ::ll::UntypedStorage<8, 24>                                       mRoot;
    ::ll::TypedStorage<8, 8, ulong>                                   mCapacity;
    ::ll::UntypedStorage<8, 48>                                       mGetMemoryFileCapacity;
    // NOLINTEND
};

} // namespace Bedrock
