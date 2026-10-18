#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/splitscreen/Host.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class JsonFileIO;
// clang-format on

namespace splitscreen {

class SplitscreenJsonAppearanceManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                           mFilePath;
    ::ll::TypedStorage<8, 48, ::splitscreen::Host>        mHost;
    ::ll::TypedStorage<8, 8, std::unique_ptr<JsonFileIO>> mFileIO;
    ::ll::TypedStorage<4, 20, ::RetryDelay>               mDeletionTimer;
    // NOLINTEND
};

} // namespace splitscreen
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
