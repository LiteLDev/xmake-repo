#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

struct TestFileStorageAreaOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                                     suggestedSize;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     maxExtendedSize;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                     journalSize;
    ::ll::TypedStorage<4, 8, std::optional<Core::CrossStorageCopyMode>> copyMode;
    ::ll::UntypedStorage<8, 48>                                         beforeWrite;
    ::ll::UntypedStorage<8, 48>                                         getCurrentTime;
    ::ll::UntypedStorage<1, 16>                                         supportsSizeQuery;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk1e9e56;
    ::ll::UntypedStorage<8, 16> mUnkdfc54f;
    ::ll::UntypedStorage<8, 16> mUnk195030;
    ::ll::UntypedStorage<4, 8>  mUnkc202c7;
    ::ll::UntypedStorage<8, 64> mUnk4221c8;
    ::ll::UntypedStorage<8, 64> mUnkd4ea61;
    ::ll::UntypedStorage<1, 1>  mUnk52c60d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TestFileStorageAreaOptions& operator=(TestFileStorageAreaOptions const&);
    TestFileStorageAreaOptions(TestFileStorageAreaOptions const&);
    TestFileStorageAreaOptions();
#endif // @header-generator platform
};

} // namespace Bedrock
