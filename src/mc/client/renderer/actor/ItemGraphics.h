#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer;
// clang-format on

class ItemGraphics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenRenderer>> mDataDrivenRenderer;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mAtlasTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemGraphics& operator=(ItemGraphics const&);
    ItemGraphics(ItemGraphics const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::TexturePtr const& getAtlasTexture() const;

    MCNAPI std::weak_ptr<DataDrivenRenderer> getDataDrivenRenderer() const;

    MCNAPI void setDataDrivenRenderer(std::weak_ptr<DataDrivenRenderer>) const;

    MCNAPI ~ItemGraphics();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ItemGraphics {};
#endif // @header-generator platform
