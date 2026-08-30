#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
