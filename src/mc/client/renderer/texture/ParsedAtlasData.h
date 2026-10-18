#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/PageSettings.h"
#include "mc/client/renderer/texture/ParsedAtlasNode.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { class PBRTextureDataManager; }
// clang-format on

struct ParsedAtlasData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>           mMetaLocation;
    ::ll::TypedStorage<8, 120, ::PageSettings>              mPageSettings;
    ::ll::TypedStorage<4, 4, int>                           mJsonPadSize;
    ::ll::TypedStorage<4, 4, uint>                          mJsonNumberOfMips;
    ::ll::TypedStorage<8, 24, std::vector<ParsedAtlasNode>> mAtlasNodesList;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedAtlasData& operator=(ParsedAtlasData const&);
    ParsedAtlasData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ParsedAtlasData(::ResourceLocation const&);

    MCNAPI ParsedAtlasData(::ParsedAtlasData const&);

    MCNAPI ~ParsedAtlasData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLocation const&);

    MCNAPI void* $ctor(::ParsedAtlasData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ParsedAtlasData {};
#endif // @header-generator platform
