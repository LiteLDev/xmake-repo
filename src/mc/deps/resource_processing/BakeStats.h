#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BakeStats {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk9eade7;
    ::ll::UntypedStorage<4, 4>  mUnk90ddbc;
    ::ll::UntypedStorage<4, 4>  mUnk32eb4f;
    ::ll::UntypedStorage<4, 4>  mUnk245fe8;
    ::ll::UntypedStorage<4, 4>  mUnkec825c;
    ::ll::UntypedStorage<4, 4>  mUnk8837e4;
    ::ll::UntypedStorage<4, 4>  mUnk80f1e7;
    ::ll::UntypedStorage<4, 4>  mUnked1516;
    ::ll::UntypedStorage<4, 4>  mUnk675b41;
    ::ll::UntypedStorage<8, 8>  mUnk8cde0b;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeStats& operator=(BakeStats const&);
    BakeStats(BakeStats const&);
    BakeStats();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~BakeStats();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
