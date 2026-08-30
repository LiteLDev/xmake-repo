#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/DecoratedPotBase.h"
#include "mc/client/model/models/DecoratedPotFace.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/PBRTexturePtrs.h"
#include "mc/deps/renderer/MatrixStack.h"
#include "mc/world/Direction.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class DecoratedPotBlockActor;
class ItemStack;
class ScreenContext;
class Vec3;
struct BlockActorRenderData;
struct Brightness;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class DecoratedPotRenderer : public ::BlockActorRenderer {
public:
    // DecoratedPotRenderer inner types define
    enum class ModelMaterial : int {
        InWorld = 0,
        GUI     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 840, ::DecoratedPotFace>                   mBackFace;
    ::ll::TypedStorage<8, 840, ::DecoratedPotFace>                   mLeftFace;
    ::ll::TypedStorage<8, 840, ::DecoratedPotFace>                   mRightFace;
    ::ll::TypedStorage<8, 840, ::DecoratedPotFace>                   mFrontFace;
    ::ll::TypedStorage<8, 2472, ::DecoratedPotBase>                  mPotBase;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mPotBaseTexture;
    ::ll::TypedStorage<8, 112, ::PBRTexturePtrs>                     mDefaultSideTexture;
    ::ll::TypedStorage<8, 24, std::map<std::string, PBRTexturePtrs>> mActorTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    DecoratedPotRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DecoratedPotRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    DecoratedPotRenderer(std::shared_ptr<mce::TextureGroup> const, std::shared_ptr<ActorResourceDefinition> const);

    MCNAPI void _renderFacesWithActorTexture(
        ::dragon::RenderMetadata const&,
        ::ScreenContext&,
        std::array<std::string, 4> const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const&
    );

    MCNAPI void _setModelMaterial(::DecoratedPotRenderer::ModelMaterial const&);

    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ItemStack const&,
        float const,
        float const,
        float const,
        float const
    );

    MCNAPI void renderInHand(::BaseActorRenderContext&, ::BlockActorRenderData const&, bool const);

    MCNAPI void renderInItemFrame(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ItemStack const&,
        ::BlockSource&,
        ::BlockPos const&,
        ::Vec3 const&,
        float,
        bool,
        ::Brightness const
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::array<std::string, 4> _getSherdsFromPotItem(::ItemStack const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup> const, std::shared_ptr<ActorResourceDefinition> const);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
