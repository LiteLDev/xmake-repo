#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1024, char[1024]> mBuffer;
    ::ll::TypedStorage<8, 8, char const*>   mOriginalString;
    ::ll::TypedStorage<8, 8, char const*>   mSanitizedString;
    // NOLINTEND

public:
    // prevent constructor by default
    SanitizedFormatString();

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
};

} // namespace Bedrock
