#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockPos;
class BlockSource;
class MapDecoration;
class MapItemSavedData;
class Player;
class ScreenContext;
class Tessellator;
class Vec3;
struct Brightness;
struct BrightnessPair;
struct OffscreenCaptureDescription;
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class MapRenderer : public ::ActorRenderer, public ::AppPlatformListener {
public:
    // MapRenderer inner types declare
    // clang-format off
    class MapInstance;
    // clang-format on

    // MapRenderer inner types define
    class MapInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const>               mArrowRotationConverter;
        ::ll::TypedStorage<8, 8, ::MapItemSavedData const&> mMapData;
        ::ll::TypedStorage<1, 1, bool>                      mDirtyTexture;
        ::ll::TypedStorage<8, 8, ::MapRenderer&>            mMapRenderer;
        ::ll::TypedStorage<8, 48, ::ResourceLocation>       mResourceLocation;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>        mMapTexture;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mMarkerMaterial;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mDecorationMaterial;
        ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>       mNameTagMaterial;
        ::ll::TypedStorage<4, 8, ::Vec2>                    playerM;
        ::ll::TypedStorage<4, 4, float>                     overlap_dist;
        // NOLINTEND

    public:
        // prevent constructor by default
        MapInstance& operator=(MapInstance const&);
        MapInstance(MapInstance const&);
        MapInstance();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void
        _drawIconBackground(::ScreenContext&, ::mce::Color const&, float, ::OffscreenCaptureDescription const&);

        MCNAPI bool _renderFaceIcon(
            ::Tessellator&,
            ::BaseActorRenderContext&,
            ::Player*,
            ::mce::Color const&,
            float,
            ::MapDecoration const&,
            ::ActorUniqueID const&,
            int,
            bool
        );

        MCNAPI void _renderLabel(::BaseActorRenderContext&, ::Vec3 const&, std::string const&, ::mce::Color const&);

        MCNAPI ~MapInstance();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<MapRenderer::MapInstance>>> mMapInstances;
    ::ll::TypedStorage<1, 1, ::SubClientId> mClientId;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mDecorationTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mMapBackgroundTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mIconBackgroundTexture;
    ::ll::TypedStorage<8, 800, std::array<mce::TexturePtr, 25>> mMarkerTextures;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMapMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh> mBackgroundMesh;
    ::ll::UntypedStorage<8, 16016> mForegroundMesh;
    ::ll::UntypedStorage<8, 0> mDecorationMeshes;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MapRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapRenderer(::SubClientId, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _generateMeshes(::BaseActorRenderContext&);

    MCNAPI ::MapRenderer::MapInstance& _getMapInstance(::MapItemSavedData const&);

    MCNAPI void _tessellateBackground(::Tessellator&);

    MCNAPI void render(
        ::BaseActorRenderContext&,
        ::Player*,
        ::BlockPos const&,
        ::BlockSource&,
        ::MapItemSavedData const&,
        bool,
        bool,
        std::optional<bool>,
        std::optional<const Brightness>
    );

    MCNAPI void resetData();

    MCNAPI void update(::MapItemSavedData&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubClientId, std::shared_ptr<mce::TextureGroup>);
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

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
