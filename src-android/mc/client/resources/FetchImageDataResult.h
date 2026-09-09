#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
