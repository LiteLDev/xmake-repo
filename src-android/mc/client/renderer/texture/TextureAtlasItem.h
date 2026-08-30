#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
// clang-format on

class TextureAtlasItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      mName;
    ::ll::TypedStorage<4, 4, int>                                               mParsedNodeIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<TextureUVCoordinateSet>>> mTextureUVs;
    ::ll::TypedStorage<1, 1, bool>                                              mIsAdditive;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasItem(TextureAtlasItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureAtlasItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
