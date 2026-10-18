#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/SkinHandle.h"

struct CharacterSelectorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPreviewImageFilePath;
    ::ll::TypedStorage<8, 112, ::SkinHandle> mSkinHandle;
    ::ll::TypedStorage<4, 4, uint>           mDefaultIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct CharacterSelectorData {};
#endif // @header-generator platform
#endif // @header-generator platform
