#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
namespace mce { class TextureGroup; }
// clang-format on

class OminousItemSpawnerRenderer : public ::ActorRenderer {
public:
    // prevent constructor by default
    OminousItemSpawnerRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OminousItemSpawnerRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OminousItemSpawnerRenderer(std::shared_ptr<mce::TextureGroup> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup> const&);
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
