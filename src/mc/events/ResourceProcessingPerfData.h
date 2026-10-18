#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourceProcessingPerfData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPackId;
    ::ll::TypedStorage<4, 4, uint>         mFilesProcessed;
    ::ll::TypedStorage<4, 4, uint>         mFilesBinaryTransformed;
    ::ll::TypedStorage<4, 4, uint>         mFilesJsonMinified;
    ::ll::TypedStorage<4, 4, uint>         mFilesAlreadyBinary;
    ::ll::TypedStorage<4, 4, uint>         mFilesJsonParseError;
    ::ll::TypedStorage<4, 4, uint>         mFilesNonJson;
    ::ll::TypedStorage<4, 4, uint>         mArchivesWritten;
    ::ll::TypedStorage<4, 4, uint>         mSubpacksProcessed;
    ::ll::TypedStorage<8, 8, long>         mDurationMs;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkfe3dd7;
    ::ll::UntypedStorage<4, 4>  mUnk5590a7;
    ::ll::UntypedStorage<4, 4>  mUnk4d0f00;
    ::ll::UntypedStorage<4, 4>  mUnk73b403;
    ::ll::UntypedStorage<4, 4>  mUnkea56d0;
    ::ll::UntypedStorage<4, 4>  mUnk667492;
    ::ll::UntypedStorage<4, 4>  mUnkb8b09e;
    ::ll::UntypedStorage<4, 4>  mUnkfb7948;
    ::ll::UntypedStorage<4, 4>  mUnk301051;
    ::ll::UntypedStorage<8, 8>  mUnk7325de;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourceProcessingPerfData& operator=(ResourceProcessingPerfData const&);
    ResourceProcessingPerfData(ResourceProcessingPerfData const&);
    ResourceProcessingPerfData();
#endif // @header-generator platform
};
