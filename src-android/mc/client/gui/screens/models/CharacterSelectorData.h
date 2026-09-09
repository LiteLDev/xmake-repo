#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/SkinHandle.h"

struct CharacterSelectorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  mPreviewImageFilePath;
    ::ll::TypedStorage<8, 96, ::SkinHandle> mSkinHandle;
    ::ll::TypedStorage<4, 4, uint>          mDefaultIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    CharacterSelectorData& operator=(CharacterSelectorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CharacterSelectorData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
