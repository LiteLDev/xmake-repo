#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/ChestBoatModel.h"
#include "mc/client/model/models/ChestRaftModel.h"
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class Matrix;
class Vec3;
namespace mce { class TextureGroup; }
// clang-format on

class ChestBoatRenderer : public ::ActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 5720, ::ChestBoatModel>       mBoatModel;
    ::ll::TypedStorage<8, 6824, ::ChestRaftModel>       mRaftModel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mHoleMaterial;
    ::ll::TypedStorage<8, 3256, ::ActorTextureInfo[11]> mBoatTextures;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>             mHole;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBoatRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBoatRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _calculateBoatTransform(::Matrix&, ::Actor const&, ::Vec3 const&, float, float);
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

    MCNAPI void $renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
