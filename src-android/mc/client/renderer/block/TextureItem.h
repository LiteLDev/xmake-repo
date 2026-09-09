#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
