#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class ResourceLocation;
struct BedrockTextureData;
namespace cg { struct ImageDescription; }
namespace mce { class TextureGroupBase; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class BedrockTexture;
class ResourceLocation;
struct BedrockTextureData;
namespace mce { class TextureGroupBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TexturePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<const BedrockTextureData>> mClientTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourceLocation>>         mResourceLocationPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TexturePtr(::mce::TexturePtr&&);

    MCNAPI TexturePtr(std::shared_ptr<mce::TextureGroupBase>, ::ResourceLocation const&);

    MCNAPI TexturePtr(::BedrockTexture const&, ::ResourceLocation const&, ::cg::TextureSetLayerType const);

    MCNAPI ::mce::ClientTexture const& getClientTexture() const;

    MCNAPI ::cg::ImageDescription const& getImageDescription() const;

    MCNAPI ::ResourceLocation const& getResourceLocation() const;

    MCNAPI ::mce::TextureDescription const& getTextureDescription() const;

    MCNAPI ::TextureLoadState getTextureLoadState() const;

    MCNAPI ulong hashCode() const;

    MCNAPI ::IsMissingTexture isMissingTexture() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::mce::ClientTexture const& operator*() const;

    MCNAPI ::mce::TexturePtr& operator=(::mce::TexturePtr const&);

    MCNAPI ::mce::TexturePtr& operator=(::mce::TexturePtr&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::TexturePtr const& NONE();

    MCNAPI static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::TexturePtr&&);

    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroupBase>, ::ResourceLocation const&);

    MCNAPI void* $ctor(::BedrockTexture const&, ::ResourceLocation const&, ::cg::TextureSetLayerType const);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TexturePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BedrockTextureData const>> mClientTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ResourceLocation>>         mResourceLocationPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TexturePtr();

    MCAPI TexturePtr(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI TexturePtr(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );

    MCAPI ~TexturePtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::TexturePtr const& NONE();

    MCAPI static ::BedrockTextureData const& mDefaultTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroupBase> group, ::ResourceLocation const& resourceLocation);

    MCAPI void* $ctor(
        ::BedrockTexture const&   bedrockTexture,
        ::ResourceLocation const& resourceLocation,
        ::cg::TextureSetLayerType textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class TexturePtr {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
