#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"

struct SubpackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mFolderName;
    ::ll::TypedStorage<8, 24, std::string>         mName;
    ::ll::TypedStorage<1, 1, ::HardwareMemoryTier> mMemoryTier;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfo& operator=(SubpackInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubpackInfo(::SubpackInfo&&);

    MCNAPI ~SubpackInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubpackInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
