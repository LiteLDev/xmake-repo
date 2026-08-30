#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IAtlasTile.h"
#include "mc/client/gui/oreui/rendering/IRenderingBackendTextureStorage.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/hal/interface/SamplerStateDescription.h"
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"
#include "mc/external/gameface/renoir/Sampler2DObject.h"
#include "mc/external/gameface/renoir/Texture2DObject.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"
#include "mc/util/BackendRenderConfig.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureService; }
namespace Gameface { class TemporaryTextureHolder; }
namespace renoir { struct Texture2D; }
// clang-format on

namespace Gameface {

class TextureStorageImpl : public ::Gameface::IRenderingBackendTextureStorage {
public:
    // TextureStorageImpl inner types declare
    // clang-format off
    struct TextureStorage;
    struct WrapUserTextureArgs;
    // clang-format on

    // TextureStorageImpl inner types define
    struct TextureStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>                             mTexture;
        ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mDesc;
        // NOLINTEND
    };

    struct WrapUserTextureArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::renoir::Texture2D const&>       mDescription;
        ::ll::TypedStorage<8, 8, ::renoir::Texture2DObject const&> mObject;
        // NOLINTEND

    public:
        // prevent constructor by default
        WrapUserTextureArgs& operator=(WrapUserTextureArgs const&);
        WrapUserTextureArgs(WrapUserTextureArgs const&);
        WrapUserTextureArgs();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<renoir::Texture2DObject, Gameface::TextureStorageImpl::TextureStorage>> mTextures;
    ::ll::UntypedStorage<8, 40> mDepthTextures;
    ::ll::TypedStorage<8, 40, std::unordered_map<renoir::Sampler2DObject, mce::SamplerStateDescription>> mSamplers;
    ::ll::TypedStorage<4, 20, std::array<renoir::Texture2DObject, 5>> mRequestedTextures;
    ::ll::TypedStorage<4, 20, std::array<renoir::Sampler2DObject, 5>> mRequestedSamplers;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<Gameface::IRenderingBackendTextureService>>> mTextureService;
    ::ll::TypedStorage<1, 2, ::Gameface::RenderUtils::BackendRenderConfig const> mConfig;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStorageImpl& operator=(TextureStorageImpl const&);
    TextureStorageImpl(TextureStorageImpl const&);
    TextureStorageImpl();
};

} // namespace Gameface
