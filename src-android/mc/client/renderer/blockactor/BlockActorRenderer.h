#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ClientPBRTextureData;
class Model;
class ScreenContext;
class Tessellator;
class Vec3;
struct ActorTextureInfo;
struct BlockActorRenderData;
struct NameTagRenderObject;
struct PBRTexturePtrs;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class BlockActorRenderer : public ::BaseActorRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockActorRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&) = 0;

    virtual void renderAlpha(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual std::vector<NameTagRenderObject> extractText(::Tessellator&, ::BlockActor&, std::string const&, std::vector<int> const&, ::Vec3);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _renderModel(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::Model&,
        ::mce::ClientTexture const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const&
    ) const;

    MCNAPI void _renderModel(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::Model&,
        ::PBRTexturePtrs const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const&
    ) const;

    MCNAPI void _renderModel(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::Model&,
        ::ActorTextureInfo const&,
        ::mce::MaterialPtr const&,
        ::mce::ClientTexture const&
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $renderAlpha(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI std::vector<NameTagRenderObject>
           $extractText(::Tessellator&, ::BlockActor&, std::string const&, std::vector<int> const&, ::Vec3);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
