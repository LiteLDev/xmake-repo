#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BakeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPackUuid;
    ::ll::TypedStorage<4, 4, uint>         mFilesProcessed;
    ::ll::TypedStorage<4, 4, uint>         mFilesBinaryTransformed;
    ::ll::TypedStorage<4, 4, uint>         mFilesJsonMinified;
    ::ll::TypedStorage<4, 4, uint>         mFilesAlreadyBinary;
    ::ll::TypedStorage<4, 4, uint>         mFilesJsonParseError;
    ::ll::TypedStorage<4, 4, uint>         mFilesNonJson;
    ::ll::TypedStorage<4, 4, uint>         mArchivesWritten;
    ::ll::TypedStorage<4, 4, uint>         mSubpacksProcessed;
    ::ll::TypedStorage<8, 8, long>         mDurationMs;
    // NOLINTEND
};

} // namespace Bedrock::Resources
