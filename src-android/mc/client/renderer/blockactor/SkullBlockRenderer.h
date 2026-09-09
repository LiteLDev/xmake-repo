#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class BaseActorRenderContext;
class BaseGameVersion;
class BlockActor;
class DragonHeadModel;
class Experiments;
class HashedString;
class PiglinHeadModel;
class SkeletonHeadModel;
class Vec3;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class SkullBlockRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                mGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                mGuiGlintMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                mDragonGuiMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                mDragonGuiGlintMaterial;
    ::ll::TypedStorage<8, 2072, ::ActorTextureInfo[7]>                           mSkullTextures;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                 mGlintTexture;
    ::ll::TypedStorage<8, 56, std::array<std::unique_ptr<SkeletonHeadModel>, 7>> mSkullGeometry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DragonHeadModel>>                   mDragonHeadModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PiglinHeadModel>>                   mPiglinHeadModel;
    // NOLINTEND

public:
    // prevent constructor by default
    SkullBlockRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkullBlockRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkullBlockRenderer(
        std::shared_ptr<ActorResourceDefinition> const,
        std::shared_ptr<mce::TextureGroup>,
        ::BaseGameVersion const&,
        ::Experiments const&
    );

    MCNAPI void renderInGui(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::BlockActor&,
        ::HashedString const&,
        float,
        float,
        float,
        float,
        bool
    );

    MCNAPI void renderSkull(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::Vec3 const&,
        int,
        float,
        ::HashedString const&,
        ::mce::MaterialPtr const*,
        ::mce::ClientTexture const*,
        int,
        float,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ActorResourceDefinition> const,
        std::shared_ptr<mce::TextureGroup>,
        ::BaseGameVersion const&,
        ::Experiments const&
    );
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
