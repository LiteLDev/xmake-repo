#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct TrimMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mMaterialId;
    ::ll::TypedStorage<8, 24, std::string>    mColor;
    ::ll::TypedStorage<8, 40, ::HashedString> mItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TrimMaterial();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
