#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ParsedTextureSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1e1e7d;
    ::ll::UntypedStorage<4, 20> mUnk4f3cc9;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedTextureSet& operator=(ParsedTextureSet const&);
    ParsedTextureSet(ParsedTextureSet const&);
    ParsedTextureSet();

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
#else // @header-generator platform
struct ParsedTextureSet {};
#endif // @header-generator platform
#endif // @header-generator platform
