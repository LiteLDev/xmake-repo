#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/TextureTint.h"
#include "mc/client/persona/TextureTintCollection.h"

struct PersonaTextureResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<persona::TextureTintCollection>> mPieceTextures;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, uint>>       mPieceTextureMap;
    ::ll::TypedStorage<8, 224, ::persona::TextureTint>                     mSkinComplexion;
    ::ll::TypedStorage<8, 224, ::persona::TextureTint>                     mFaceSkinComplexion;
    ::ll::TypedStorage<8, 224, ::persona::TextureTint>                     mCape;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersonaTextureResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
