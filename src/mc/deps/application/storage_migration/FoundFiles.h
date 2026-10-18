#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/application/storage_migration/FoundFile.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/ErrorInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::StorageMigration {

struct FoundFiles {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 72>     mDetectionResult;
    ::ll::UntypedStorage<8, 40>     mFiles;
    ::ll::TypedStorage<8, 8, ulong> mTotalByteSize;
    ::ll::TypedStorage<8, 8, ulong> mNumFiles;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk35f12b;
    ::ll::UntypedStorage<8, 64> mUnkfab8a5;
    ::ll::UntypedStorage<8, 8>  mUnk9caf3b;
    ::ll::UntypedStorage<8, 8>  mUnk2b41f2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FoundFiles& operator=(FoundFiles const&);
    FoundFiles(FoundFiles const&);
    FoundFiles();
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
