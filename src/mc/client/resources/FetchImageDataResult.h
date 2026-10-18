#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/http/Status.h"

struct FetchImageDataResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::Http::Status> mStatus;
    ::ll::UntypedStorage<1, 24>                        mFullPath;
    ::ll::TypedStorage<8, 8, ulong>                    mFileSize;
    // NOLINTEND

public:
    // prevent constructor by default
    FetchImageDataResult& operator=(FetchImageDataResult const&);
    FetchImageDataResult();
};
#else // @header-generator platform
struct FetchImageDataResult {};
#endif // @header-generator platform
