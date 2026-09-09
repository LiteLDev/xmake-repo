#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocationPair;
struct BedrockTextureData;
namespace cg { class TextureSetDefinition; }
namespace cg { class TextureSetImageContainer; }
namespace cg { class TextureSetImageDescription; }
namespace cg { struct ImageDescription; }
namespace dragon { class ResolvedTextureResource; }
namespace mce { class TextureContainer; }
namespace mce { struct ClientTexture; }
namespace mce { struct TextureDescription; }
namespace mce { struct TextureResourceService; }
// clang-format on

class BedrockTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<BedrockTextureData>> mBedrockTextureData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BedrockTextureData>> mBedrockMERSTextureData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BedrockTextureData>> mBedrockNormalTextureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedrockTexture();

    MCNAPI BedrockTexture(::BedrockTexture const&);

    MCNAPI BedrockTexture(::BedrockTexture&&);

    MCNAPI std::optional<ResourceLocationPair> const
    _getLayerLocation(::gsl::not_null<std::shared_ptr<cg::TextureSetDefinition>> const, ::cg::TextureSetLayerType);

    MCNAPI bool _loadFromImageBuffer(
        ::cg::TextureSetImageContainer&,
        ::cg::TextureSetLayerType const,
        ::mce::TextureResourceService&,
        ::cg::TextureSetImageDescription const&,
        ::IsMissingTexture,
        std::string_view
    ) const;

    MCNAPI ::mce::ClientTexture const& getClientHandle(::cg::TextureSetLayerType const) const;

    MCNAPI std::shared_ptr<const BedrockTextureData> const
           getSharedBedrockTextureData(::cg::TextureSetLayerType const) const;

    MCNAPI ::mce::TextureDescription const& getTextureDescription() const;

    MCNAPI ::cg::TextureSetImageDescription getTextureSetImageDescription() const;

    MCNAPI ::IsMissingTexture isMissingTexture() const;

    MCNAPI bool load(
        ::mce::TextureResourceService&,
        ::gsl::not_null<std::shared_ptr<cg::TextureSetDefinition>> const,
        std::string_view const
    );

    MCNAPI bool load(
        ::mce::TextureResourceService&,
        ::mce::TextureContainer&&,
        ::IsMissingTexture,
        std::string_view const,
        ::cg::TextureSetLayerType const
    );

    MCNAPI void loadMetadata(::gsl::not_null<std::shared_ptr<cg::TextureSetDefinition>> const);

    MCNAPI void loadMetadata(::mce::TextureDescription const&, std::optional<IsMissingTexture> const);

    MCNAPI void loadMetadata(::cg::TextureSetImageDescription const&, std::optional<IsMissingTexture> const);

    MCNAPI ::BedrockTexture& operator=(::BedrockTexture const&);

    MCNAPI void unload();

    MCNAPI ~BedrockTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BedrockTexture const&);

    MCNAPI void* $ctor(::BedrockTexture&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
