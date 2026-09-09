#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockTessellator;
namespace mce { class TextureGroup; }
// clang-format on

class FallingBlockRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTessellator&> mBlockTessellator;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mFallingBlockMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mFallingBlockMaterialWithColor;
    // NOLINTEND

public:
    // prevent constructor by default
    FallingBlockRenderer& operator=(FallingBlockRenderer const&);
    FallingBlockRenderer(FallingBlockRenderer const&);
    FallingBlockRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FallingBlockRenderer();

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
