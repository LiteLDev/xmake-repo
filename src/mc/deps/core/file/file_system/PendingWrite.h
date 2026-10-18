#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/FileOpenMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

struct PendingWrite {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                    mWritePath;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode> mOpenMode;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk15782c;
    ::ll::UntypedStorage<1, 2>  mUnkaeb3eb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PendingWrite& operator=(PendingWrite const&);
    PendingWrite(PendingWrite const&);
    PendingWrite();
#endif // @header-generator platform
};

} // namespace Core
