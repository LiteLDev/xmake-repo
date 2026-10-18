#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/SignModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/actor/SignBlockActor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class Font;
class IClientInstance;
class IVanillaRenderBlockActorComponent;
class Model;
class ProfanityContext;
class ScreenContext;
class SignBlockActor;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class SignRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mSignTex;
    ::ll::UntypedStorage<8, 24>                    mTextureMap;
    ::ll::TypedStorage<8, 1368, ::SignModel>       mSignModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>  mGlowSignTextMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>  mSignTextMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    SignRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual float _getScaleFactor() const;

    virtual float _yTextOffset() const;

    virtual float _zTextOffset() const;

    virtual int _getSignWidth() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SignRenderer(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _renderSign(
        ::BaseActorRenderContext&,
        ::Block const&,
        float const,
        int const,
        float const,
        ::ScreenContext&,
        ::BlockSource&,
        ::IVanillaRenderBlockActorComponent&,
        ::BlockPos const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const,
        ::Model&,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const&
    );

    MCNAPI void _renderText(
        ::BaseActorRenderContext&,
        ::IVanillaRenderBlockActorComponent&,
        float,
        ::BlockSource const&,
        ::SignTextSide
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI float $_getScaleFactor() const;

    MCNAPI float $_yTextOffset() const;

    MCNAPI float $_zTextOffset() const;

    MCNAPI int $_getSignWidth() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/models/SignModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class IVanillaRenderBlockActorComponent;
class Model;
class ScreenContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class SignRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ActorTextureInfo>                                   mSignTex;
    ::ll::TypedStorage<8, 16, ::std::map<::SignBlock::SignType, ::ActorTextureInfo>> mTextureMap;
    ::ll::TypedStorage<8, 1488, ::SignModel>                                         mSignModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                    mGlowSignTextMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                    mSignTextMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    SignRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual float _getScaleFactor() const;

    virtual float _yTextOffset() const;

    virtual float _zTextOffset() const;

    virtual int _getSignWidth() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SignRenderer(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void _renderSign(
        ::BaseActorRenderContext&                               renderContext,
        ::Block const&                                          block,
        float const                                             size,
        int const                                               breakingAmount,
        float const                                             frameAlpha,
        ::ScreenContext&                                        screenContext,
        ::BlockSource&                                          renderSource,
        ::IVanillaRenderBlockActorComponent&                    renderComponent,
        ::BlockPos const&                                       worldPos,
        ::mce::MaterialPtr const&                               forcedMat,
        ::mce::ClientTexture const                              forcedTex,
        ::Model&                                                model,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const& cssMetadata
    );

    MCAPI void _renderText(
        ::BaseActorRenderContext&            renderContext,
        ::IVanillaRenderBlockActorComponent& renderComponent,
        float                                size,
        ::BlockSource const&                 renderSource,
        ::SignTextSide                       side
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    MCFOLD float $_getScaleFactor() const;

    MCFOLD float $_yTextOffset() const;

    MCAPI float $_zTextOffset() const;

    MCFOLD int $_getSignWidth() const;
    // NOLINTEND
};
#else // @header-generator platform
class SignRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
