#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/minecraft_renderer/framebuilder/DitheringParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PlayerView.h"
#include "mc/deps/minecraft_renderer/framebuilder/UITarget.h"
#include "mc/external/render_dragon/frame_graph/BackBufferColor.h"
#include "mc/external/render_dragon/frame_graph/BackBufferDepth.h"
#include "mc/external/render_dragon/frame_renderer/FrameRendererResources.h"
#include "mc/external/render_dragon/frame_renderer/RenderContext.h"
#include "mc/external/render_dragon/rendering/Camera.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::materials { class MaterialResourceManager; }
namespace dragon::materials { struct MaterialUniformName; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct FancyFrameRendererResources : public ::dragon::framerenderer::FrameRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                                              mScreenViewport;
    ::ll::TypedStorage<8, 24, std::vector<mce::framebuilder::bgfxbridge::PlayerView> const> mPlayerViews;
    ::ll::UntypedStorage<8, 24>                                                             mChildViews;
    ::ll::TypedStorage<8, 24, std::vector<dragon::rendering::Camera> const>                 mDebugCameras;
    ::ll::UntypedStorage<8, 24>                                                             mTerrainAtlasTextureHandle;
    ::ll::TypedStorage<8, 56, std::optional<mce::framebuilder::bgfxbridge::UITarget> const> mPersistentUITarget;
    ::ll::UntypedStorage<2, 8>                                                              mPersistentUIRect;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>&> mMaterialResourceService;
    ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialResourceManager&>                    mMaterialResourceManager;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedImageResource>&>    mImageResourceService;
    ::ll::TypedStorage<8, 8, ::dragon::atlas::IAtlasRenderOperations*>                         mAtlas;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>                         mSunDir;
    ::ll::TypedStorage<8, 48, ::mce::framebuilder::DitheringParameters const>                  mDitheringParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    FancyFrameRendererResources& operator=(FancyFrameRendererResources const&);
    FancyFrameRendererResources(FancyFrameRendererResources const&);
    FancyFrameRendererResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FancyFrameRendererResources(::mce::framebuilder::bgfxbridge::FancyFrameRendererResources&&);

    MCNAPI FancyFrameRendererResources(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)1> const&,
        std::vector<mce::framebuilder::bgfxbridge::PlayerView> const&,
        std::vector<std::tuple<
            mce::framebuilder::bgfxbridge::PlayerView,
            dragon::framegraph::resource::BackBufferColor<dragon::framerenderer::RenderContext>,
            dragon::framegraph::resource::BackBufferDepth<dragon::framerenderer::RenderContext>>> const&,
        std::vector<dragon::rendering::Camera> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::rendering::ClipSpaceDepthMode const,
        ::dragon::frameobject::components::MeshFilter const&,
        std::optional<mce::framebuilder::bgfxbridge::UITarget> const,
        ::cg::math::Rect<ushort> const&,
        ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>&,
        ::dragon::materials::MaterialResourceManager&,
        ::dragon::atlas::IAtlasRenderOperations*,
        ::mce::CheckedResourceService<dragon::ResolvedImageResource>&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::mce::framebuilder::DitheringParameters const&
    );

    MCNAPI ~FancyFrameRendererResources();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::dragon::materials::MaterialUniformName const& MaterialTerrainTextureAtlas();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::framebuilder::bgfxbridge::FancyFrameRendererResources&&);

    MCNAPI void* $ctor(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)1> const&,
        std::vector<mce::framebuilder::bgfxbridge::PlayerView> const&,
        std::vector<std::tuple<
            mce::framebuilder::bgfxbridge::PlayerView,
            dragon::framegraph::resource::BackBufferColor<dragon::framerenderer::RenderContext>,
            dragon::framegraph::resource::BackBufferDepth<dragon::framerenderer::RenderContext>>> const&,
        std::vector<dragon::rendering::Camera> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::rendering::ClipSpaceDepthMode const,
        ::dragon::frameobject::components::MeshFilter const&,
        std::optional<mce::framebuilder::bgfxbridge::UITarget> const,
        ::cg::math::Rect<ushort> const&,
        ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>&,
        ::dragon::materials::MaterialResourceManager&,
        ::dragon::atlas::IAtlasRenderOperations*,
        ::mce::CheckedResourceService<dragon::ResolvedImageResource>&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::mce::framebuilder::DitheringParameters const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
