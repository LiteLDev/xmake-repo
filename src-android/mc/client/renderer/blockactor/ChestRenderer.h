#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChestModel.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Block;
class BlockPos;
class BlockSource;
class ChestBlockActor;
struct BlockActorRenderData;
struct BrightnessPair;
namespace LightPropagation { class LightVolumeManager; }
namespace mce { class TextureGroup; }
// clang-format on

class ChestRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> largeTex;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> normalTex;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> trappedLargeTex;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> trappedTex;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo> enderTex;
    ::ll::UntypedStorage<8, 1184>                  mCopperTextures;
    ::ll::UntypedStorage<8, 1184>                  mLargeCopperTextures;
    ::ll::TypedStorage<8, 1920, ::ChestModel>      mChestModel;
    ::ll::TypedStorage<8, 1920, ::ChestModel>      mLargeChestModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChestRenderer(std::shared_ptr<mce::TextureGroup>);
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
