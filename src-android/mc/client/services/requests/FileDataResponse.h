#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
