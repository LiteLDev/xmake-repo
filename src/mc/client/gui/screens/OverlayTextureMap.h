#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureGroupBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class OverlayTextureMap {
public:
    // OverlayTextureMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class TextureId : int {
        None   = 0,
        Frozen = 1,
        _count = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroupBase>> mTextureGroup;
    ::ll::TypedStorage<4, 4, ::OverlayTextureMap::TextureId>          mCachedOverlayTextureId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mCachedOverlayTexture;
    ::ll::TypedStorage<8, 48, std::array<std::string, 2>>             mTextureNames;
    // NOLINTEND

public:
    // prevent constructor by default
    OverlayTextureMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OverlayTextureMap(std::shared_ptr<mce::TextureGroupBase>);

    MCNAPI ::mce::TexturePtr _getTextureHandle(std::string) const;

    MCNAPI ::mce::TexturePtr get(::OverlayTextureMap::TextureId) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroupBase>);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class TextureId : int {
        None   = 0,
        Frozen = 1,
        Count  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroupBase>> mTextureGroup;
    ::ll::TypedStorage<4, 4, ::OverlayTextureMap::TextureId>              mCachedOverlayTextureId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                          mCachedOverlayTexture;
    ::ll::TypedStorage<8, 64, ::std::array<::std::string, 2>>             mTextureNames;
    // NOLINTEND

public:
    // prevent constructor by default
    OverlayTextureMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OverlayTextureMap(::std::shared_ptr<::mce::TextureGroupBase> textureGroup);

    MCAPI ::mce::TexturePtr _getTextureHandle(::std::string effectTextureName) const;

    MCAPI ::mce::TexturePtr get(::OverlayTextureMap::TextureId textureId) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> textureGroup);
    // NOLINTEND
#else // @header-generator platform
    enum class TextureId : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
