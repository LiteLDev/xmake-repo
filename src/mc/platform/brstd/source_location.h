#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct source_location {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, char const* const> mFileName;
    ::ll::TypedStorage<8, 8, char const* const> mFunctionName;
    ::ll::TypedStorage<4, 4, uint const>        mLine;
    ::ll::TypedStorage<4, 4, uint const>        mColumn;
    ::ll::TypedStorage<4, 4, uint const>        mFileNameSize;
    ::ll::TypedStorage<4, 4, uint const>        mFunctionNameSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnka5a291;
    ::ll::UntypedStorage<8, 8> mUnka63487;
    ::ll::UntypedStorage<4, 4> mUnk6299c8;
    ::ll::UntypedStorage<4, 4> mUnk7d4674;
    ::ll::UntypedStorage<4, 4> mUnkd253b0;
    ::ll::UntypedStorage<4, 4> mUnk3d56d9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    source_location& operator=(source_location const&);
    source_location(source_location const&);
#endif // @header-generator platform
    source_location();
};

} // namespace brstd
