#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MessagePatchnoteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mBody;
    ::ll::TypedStorage<8, 24, std::string> mImageId;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePatchnoteData& operator=(MessagePatchnoteData const&);
    MessagePatchnoteData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessagePatchnoteData(::MessagePatchnoteData const&);

    MCNAPI ~MessagePatchnoteData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MessagePatchnoteData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MessagePatchnoteData {};
#endif // @header-generator platform
