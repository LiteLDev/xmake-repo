#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1024, char[1024]> mBuffer;
    ::ll::TypedStorage<8, 8, char const*>   mOriginalString;
    ::ll::TypedStorage<8, 8, char const*>   mSanitizedString;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1024> mUnk5a4969;
    ::ll::UntypedStorage<8, 8>    mUnkbfa87f;
    ::ll::UntypedStorage<8, 8>    mUnkfbcc70;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SanitizedFormatString& operator=(SanitizedFormatString const&);
    SanitizedFormatString(SanitizedFormatString const&);
#endif // @header-generator platform
    SanitizedFormatString();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SanitizedFormatString(char const*);

    MCNAPI void _sanitize();

    MCNAPI char const* getOriginalWithoutFlag() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock
