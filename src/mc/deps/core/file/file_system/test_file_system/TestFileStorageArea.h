#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct TestFileStorageArea {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mArea;
    ::ll::UntypedStorage<8, 24>                                       mRoot;
    ::ll::TypedStorage<8, 8, ulong>                                   mCapacity;
    ::ll::UntypedStorage<8, 48>                                       mGetMemoryFileCapacity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd18be7;
    ::ll::UntypedStorage<8, 32> mUnk54e8e4;
    ::ll::UntypedStorage<8, 8>  mUnke0343f;
    ::ll::UntypedStorage<8, 64> mUnk538767;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TestFileStorageArea& operator=(TestFileStorageArea const&);
    TestFileStorageArea(TestFileStorageArea const&);
    TestFileStorageArea();
#endif // @header-generator platform
};

} // namespace Bedrock
