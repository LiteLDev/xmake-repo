#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct FMODFileDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>        mFileSize;
    ::ll::TypedStorage<8, 24, std::string> mFileName;
    ::ll::TypedStorage<4, 40, std::mutex>  mFileMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    FMODFileDescriptor();
};
#else // @header-generator platform
struct FMODFileDescriptor {};
#endif // @header-generator platform
