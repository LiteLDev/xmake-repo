#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SkinnedMesh.h"
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/ActorTextureInfo.h"
#include "mc/deps/application/AppPlatformListener.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class Motif;
class Tessellator;
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class PaintingRenderer : public ::ActorRenderer, public ::AppPlatformListener {
public:
    // PaintingRenderer inner types declare
    // clang-format off
    struct PaintingMesh;
    struct PaintingUVs;
    // clang-format on

    // PaintingRenderer inner types define
    struct PaintingMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 1352, ::SkinnedMesh>     mBorderMesh;
        ::ll::TypedStorage<8, 1352, ::SkinnedMesh>     mPaintingMesh;
        ::ll::TypedStorage<8, 296, ::ActorTextureInfo> mPaintingTexture;
        // NOLINTEND

    public:
        // prevent constructor by default
        PaintingMesh& operator=(PaintingMesh const&);
        PaintingMesh(PaintingMesh const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PaintingMesh();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct PaintingUVs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mBorderUVs;
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mPaintingUVs;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PaintingRenderer::PaintingMesh>> mPaintingMeshes;
    ::ll::TypedStorage<8, 296, ::ActorTextureInfo>                                             mLegacyPaintingTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    PaintingRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaintingRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual ::AABB getRenderBounds(::Actor const&) const;

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PaintingRenderer(std::shared_ptr<mce::TextureGroup>, std::vector<const Motif*>);

    MCNAPI void _tessellateBorder(::Tessellator&, int, int, ::glm::vec<4, float, (glm::qualifier)0>);

    MCNAPI void _tessellatePainting(::Tessellator&, int, int, ::glm::vec<4, float, (glm::qualifier)0>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, std::vector<const Motif*>);
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

    MCNAPI ::AABB $getRenderBounds(::Actor const&) const;

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
