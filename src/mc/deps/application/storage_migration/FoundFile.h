#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::StorageMigration {

struct FoundFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>     mSourceFile;
    ::ll::UntypedStorage<8, 24>     mDestinationFile;
    ::ll::TypedStorage<8, 8, ulong> mByteSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8ddc58;
    ::ll::UntypedStorage<8, 32> mUnk6a4035;
    ::ll::UntypedStorage<8, 8>  mUnkf3e2ab;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FoundFile& operator=(FoundFile const&);
    FoundFile(FoundFile const&);
    FoundFile();
#endif // @header-generator platform
};

} // namespace Bedrock::StorageMigration
