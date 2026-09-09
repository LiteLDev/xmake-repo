#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/TridentModel.h"
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class ScreenContext;
class ThrownTrident;
struct OffscreenCaptureDescription;
namespace mce { class TextureGroup; }
// clang-format on

class ThrownTridentRenderer : public ::ActorRenderer {
public:
    // ThrownTridentRenderer inner types declare
    // clang-format off
    struct LeashStepValues;
    // clang-format on

    // ThrownTridentRenderer inner types define
    struct LeashStepValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>   uVal;
        ::ll::TypedStorage<4, 4, float>   ringScale;
        ::ll::TypedStorage<4, 12, ::Vec3> v;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mTridentTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mLoyaltyRopeTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>   mGlintTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>  mLeashMaterial;
    ::ll::TypedStorage<8, 1384, ::TridentModel>    mTridentModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrownTridentRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThrownTridentRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ThrownTridentRenderer(std::shared_ptr<ActorResourceDefinition> const, std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ActorResourceDefinition> const, std::shared_ptr<mce::TextureGroup>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
