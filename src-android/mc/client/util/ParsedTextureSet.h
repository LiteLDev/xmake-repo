#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ParsedTextureSetLayer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/resources/MERSUniformData.h"

struct ParsedTextureSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ParsedTextureSetLayer>> mParsedLayers;
    ::ll::TypedStorage<4, 20, std::optional<MERSUniformData>>     mMERSUniforms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParsedTextureSet();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
