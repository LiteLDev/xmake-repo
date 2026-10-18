#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class EntityRegistry;
class LevelRenderer;
class LocalPlayer;
class Matrix;
class ScreenContext;
class Tessellator;
class Vec3;
namespace MinecraftCamera { struct CameraComponent; }
namespace mce { class Color; }
namespace mce { class MeshContext; }
namespace mce { class TextureGroup; }
namespace mce::framebuilder { class FrameBuilder; }
// clang-format on

class FullScreenEffectRenderer : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, mce::Mesh>> mMeshes;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                        mHeadlockedOverlayMesh;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                        mOverlayMeshFill;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                        mHeadlockedSpyglassMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                   mAtlasTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                   mPumpkinTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                   mSpyglassTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  mFullscreenCubeOpaqueMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  mFullscreenCubeBlendMaterial;
    ::ll::TypedStorage<4, 4, float>                                mScopeScale;
    // NOLINTEND

public:
    // prevent constructor by default
    FullScreenEffectRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FullScreenEffectRenderer();

    virtual void onAppSuspended();

    virtual void onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FullScreenEffectRenderer(std::shared_ptr<mce::TextureGroup>);

    MCNAPI ::mce::Color _getColor(::LevelRenderer&, ::BlockSource&, ::Block const&, ::Vec3 const&);

    MCNAPI ::mce::Mesh const& _getCubeFor(::Tessellator&, ::Block const&, bool, bool);

    MCNAPI void _renderEffect(
        ::mce::MeshContext&,
        ::mce::Mesh const&,
        ::mce::MaterialPtr const,
        ::mce::TexturePtr const&,
        ::ServiceReference<mce::framebuilder::FrameBuilder> const&,
        bool const,
        bool const
    ) const;

    MCNAPI void render(
        ::ScreenContext&,
        ::LevelRenderer&,
        ::LocalPlayer const&,
        float,
        ::ServiceReference<mce::framebuilder::FrameBuilder> const&
    );

    MCNAPI void renderGenericCamera(::ScreenContext&, ::EntityRegistry const&);

    MCNAPI void
    renderHeadlocked(::ScreenContext&, ::LocalPlayer const&, float, ::MinecraftCamera::CameraComponent const*);
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
    MCNAPI void $onAppSuspended();

    MCNAPI void $onLowMemory(::LowMemorySeverity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FullScreenEffectRenderer {};
#endif // @header-generator platform
