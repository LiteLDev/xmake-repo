#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/edu/make_code_fileio/MakeCodeFileResult.h"

namespace MakeCodeFileIO {

struct MakeCodeFileIOReadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MakeCodeFileIO::MakeCodeFileResult> mResult;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mFileContents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mFileContents;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MakeCodeFileIO
