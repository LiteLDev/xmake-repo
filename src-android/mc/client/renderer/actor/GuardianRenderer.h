#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/actor/MobRenderer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class GuardianModel;
class Matrix;
class Mob;
class Vec3;
namespace mce { class TextureGroup; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

class GuardianRenderer : public ::MobRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo>           mElderSkin;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GuardianModel>> mGhostModel;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuardianRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void setupScale(::Mob const&, ::Matrix&, float) const;
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

    MCNAPI void $setupScale(::Mob const&, ::Matrix&, float) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
