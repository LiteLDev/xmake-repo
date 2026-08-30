#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/PistonArmModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class PistonBlockActorRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mPistonArmTex;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mPistonArmStickyTex;
    ::ll::TypedStorage<8, 1912, ::PistonArmModel>  mPistonArm;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonBlockActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PistonBlockActorRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PistonBlockActorRenderer(std::shared_ptr<mce::TextureGroup>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
