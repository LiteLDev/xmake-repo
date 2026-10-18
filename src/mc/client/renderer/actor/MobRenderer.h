#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class ClientPBRTextureData;
class Matrix;
class Mob;
class Model;
class ScreenContext;
class Vec2;
class Vec3;
struct MERSUniformData;
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
// clang-format on

class MobRenderer : public ::ActorRenderer {
#else // @header-generator platform
class MobRenderer {
#endif // @header-generator platform
public:
    // MobRenderer inner types declare
    // clang-format off
    struct ArmorPrepareResult;
    // clang-format on

    // MobRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ArmorPrepareResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                     mWearingArmor;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr const> mArmorTexture;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr const> mGlintTexture;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mDefaultSkin;
    ::ll::TypedStorage<4, 4, float>                mWP;
    ::ll::TypedStorage<4, 4, float>                mWS;
    ::ll::TypedStorage<4, 4, float>                mBob;
    ::ll::TypedStorage<4, 4, float>                mHeadRot;
    ::ll::TypedStorage<4, 4, float>                mBodyRot;
    ::ll::TypedStorage<4, 4, float>                mHeadRotx;
    ::ll::TypedStorage<4, 4, float>                mASscale;
    ::ll::TypedStorage<8, 8, ::Model*>             mArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    MobRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MobRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderDebug(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void setupPosition(::Actor const&, ::Vec3 const&, ::Matrix&) const;

    virtual void setupRotations(::Actor const&, float, float, ::Matrix&, float) const;

    virtual float getAttackAnim(::Mob&, float);

    virtual float getBob(::Mob&, float);

    virtual float getFlipDegrees(::Mob const&) const;

    virtual void setupScale(::Mob const&, ::Matrix&, float) const;

    virtual void renderModel(::BaseActorRenderContext&, ::ActorRenderData&, ::Model&, ::ClientPBRTextureData const&, std::optional<MERSUniformData> const&);

    virtual void additionalRendering(::BaseActorRenderContext&, ::Model&, ::Mob&, float, float, float, float, float, float, float);

    virtual void renderLayers(::BaseActorRenderContext&, ::Actor&, float, float, float, float, float);

    virtual void drawLayers(::ScreenContext&);

    virtual float getSneakingHeightOffset() const;

    virtual float getSwimmingHeightOffset() const;

    virtual ::MobRenderer::ArmorPrepareResult prepareArmor(::ScreenContext&, ::BaseActorRenderContext&, ::Mob&, ::SharedTypes::Legacy::ArmorSlot, ::Model&, float);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobRenderer(
        std::unique_ptr<Model>,
        std::shared_ptr<mce::TextureGroup>,
        ::ActorTextureInfo const&,
        ::Vec2 const&,
        ::Vec3 const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<Model>,
        std::shared_ptr<mce::TextureGroup>,
        ::ActorTextureInfo const&,
        ::Vec2 const&,
        ::Vec3 const&
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
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderDebug(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $setupPosition(::Actor const&, ::Vec3 const&, ::Matrix&) const;

    MCNAPI void $setupRotations(::Actor const&, float, float, ::Matrix&, float) const;

    MCNAPI float $getAttackAnim(::Mob&, float);

    MCNAPI float $getBob(::Mob&, float);

    MCNAPI float $getFlipDegrees(::Mob const&) const;

    MCNAPI void $setupScale(::Mob const&, ::Matrix&, float) const;

    MCNAPI void $renderModel(
        ::BaseActorRenderContext&,
        ::ActorRenderData&,
        ::Model&,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI void
    $additionalRendering(::BaseActorRenderContext&, ::Model&, ::Mob&, float, float, float, float, float, float, float);

    MCNAPI void $renderLayers(::BaseActorRenderContext&, ::Actor&, float, float, float, float, float);

    MCNAPI void $drawLayers(::ScreenContext&);

    MCNAPI float $getSneakingHeightOffset() const;

    MCNAPI float $getSwimmingHeightOffset() const;

    MCNAPI ::MobRenderer::ArmorPrepareResult $prepareArmor(
        ::ScreenContext&,
        ::BaseActorRenderContext&,
        ::Mob&,
        ::SharedTypes::Legacy::ArmorSlot,
        ::Model&,
        float
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct ArmorPrepareResult {};
#endif // @header-generator platform
};
