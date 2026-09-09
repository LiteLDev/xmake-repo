#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SerializedActorModel.h"
#include "mc/client/renderer/blockactor/SerializedActorRenderer.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinitionGroup;
class BlockType;
class ItemStack;
class SerializedActorBlockActor;
struct ActorTextureInfo;
// clang-format on

class CopperGolemStatueRenderer : public ::SerializedActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SerializedActorModel>> mModels;
    ::ll::UntypedStorage<8, 1184>                                mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperGolemStatueRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CopperGolemStatueRenderer();

    virtual ::SerializedActorRenderer::RenderData getRenderData(::SerializedActorRenderer::RenderType, ::BlockType const&, ::SerializedActorBlockActor const*, ::ItemStack const*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CopperGolemStatueRenderer(::ActorResourceDefinitionGroup const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorResourceDefinitionGroup const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SerializedActorRenderer::RenderData $getRenderData(
        ::SerializedActorRenderer::RenderType,
        ::BlockType const&,
        ::SerializedActorBlockActor const*,
        ::ItemStack const*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
