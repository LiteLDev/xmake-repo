#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/Status.h"

class FileDataResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mStatus;
    ::ll::UntypedStorage<8, 24>                        mFullPath;
    ::ll::TypedStorage<8, 8, ulong>                    mFileSize;
    // NOLINTEND
};
#else // @header-generator platform
class FileDataResponse {};
#endif // @header-generator platform
