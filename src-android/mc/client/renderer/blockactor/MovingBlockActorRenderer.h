#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockTessellator;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class MovingBlockActorRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTessellator&>      mBlockTessellator;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>       mAtlasTexture;
    ::ll::TypedStorage<8, 352, ::mce::MaterialPtr[22]> mBlockMaterials;
    // NOLINTEND

public:
    // prevent constructor by default
    MovingBlockActorRenderer& operator=(MovingBlockActorRenderer const&);
    MovingBlockActorRenderer(MovingBlockActorRenderer const&);
    MovingBlockActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovingBlockActorRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MovingBlockActorRenderer(std::shared_ptr<mce::TextureGroup>, ::BlockTessellator&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, ::BlockTessellator&);
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
