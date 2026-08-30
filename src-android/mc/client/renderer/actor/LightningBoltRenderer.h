#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
namespace mce { class TextureGroup; }
// clang-format on

class LightningBoltRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mLightningMat;
    // NOLINTEND

public:
    // prevent constructor by default
    LightningBoltRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LightningBoltRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LightningBoltRenderer(std::shared_ptr<mce::TextureGroup>);
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
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
