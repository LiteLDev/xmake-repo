#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Tessellator;
class Vec3;
struct BlockActorRenderData;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class BeaconRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mBeaconTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconTransparentMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tessellateAlphaBeamSegment(::Tessellator&, ::Vec3 const&, float, ::mce::Color const&, float);

    MCNAPI static void
    tessellateOpaqueBeamSegment(::Tessellator&, ::Vec3 const&, float, float, ::mce::Color const&, float, float);
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
