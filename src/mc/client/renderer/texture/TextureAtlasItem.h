#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

class TextureAtlasItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                          mName;
    ::ll::TypedStorage<4, 4, int>                                                     mParsedNodeIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::TextureUVCoordinateSet>>> mTextureUVs;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsAdditive;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasItem& operator=(TextureAtlasItem const&);
    TextureAtlasItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextureAtlasItem(::TextureAtlasItem const&);

    MCAPI TextureAtlasItem(::std::string const& name, uint64 count, bool isAdditive);

    MCAPI ~TextureAtlasItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TextureAtlasItem const&);

    MCAPI void* $ctor(::std::string const& name, uint64 count, bool isAdditive);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TextureAtlasItem {};
#endif // @header-generator platform
#endif // @header-generator platform
