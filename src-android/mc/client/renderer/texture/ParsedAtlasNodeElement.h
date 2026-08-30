#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ParsedTextureSetLayer.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

struct ParsedAtlasNodeElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<TextureUVCoordinateSet>> mUv;
    ::ll::TypedStorage<8, 288, ::ParsedTextureSetLayer>                mParsedTextureSetLayer;
    ::ll::TypedStorage<4, 4, int>                                      mPackIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedAtlasNodeElement& operator=(ParsedAtlasNodeElement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParsedAtlasNodeElement();

    MCNAPI ~ParsedAtlasNodeElement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
