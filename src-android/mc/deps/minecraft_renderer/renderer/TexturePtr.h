#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace mce {

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

} // namespace mce
