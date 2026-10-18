#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/TextureAtlasItem.h"

struct TextureItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        defaultName;
    ::ll::TypedStorage<8, 24, std::string>        carriedName;
    ::ll::TypedStorage<8, 64, ::TextureAtlasItem> defaultItem;
    ::ll::TypedStorage<8, 64, ::TextureAtlasItem> carriedItem;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureItem& operator=(TextureItem const&);
    TextureItem(TextureItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureItem();
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
#include "mc/client/renderer/texture/TextureAtlasItem.h"

struct TextureItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      defaultName;
    ::ll::TypedStorage<8, 32, ::std::string>      carriedName;
    ::ll::TypedStorage<8, 72, ::TextureAtlasItem> defaultItem;
    ::ll::TypedStorage<8, 72, ::TextureAtlasItem> carriedItem;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureItem {};
#endif // @header-generator platform
#endif // @header-generator platform
