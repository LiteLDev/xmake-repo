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

class EmptyRenderer : public ::ActorRenderer {
public:
    // prevent constructor by default
    EmptyRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptyRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);
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
