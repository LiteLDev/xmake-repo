#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/bgfx/RendererType.h"
#include "mc/external/render_dragon/rendering/BufferClear.h"
#include "mc/external/render_dragon/rendering/CameraHandle.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"
#include "mc/external/render_dragon/rendering/RenderTargetTexture.h"

namespace dragon::rendering {

struct Camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::rendering::CameraHandle>                      mHandle;
    ::ll::UntypedStorage<2, 8>                                                       mViewport;
    ::ll::UntypedStorage<2, 8>                                                       mScissorRect;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>            mProjectionMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>            mViewMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>               mPosition;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>               mTarget;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>               mRight;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>               mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>               mDirection;
    ::ll::TypedStorage<4, 4, float>                                                  mDistanceToTarget;
    ::ll::TypedStorage<4, 16, ::dragon::rendering::BufferClear>                      mBufferClear;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ushort>>>                    mRegistryEntryHandlesFilter;
    ::ll::TypedStorage<4, 12, std::optional<dragon::rendering::RenderTargetTexture>> mRenderTargetTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    Camera& operator=(Camera const&);
    Camera();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Camera(::dragon::rendering::Camera&&);

    MCNAPI ::dragon::rendering::BufferClear const getBufferClear() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const getClipPlanes(::bgfx::RendererType::Enum) const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getDirection() const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getPosition() const;

    MCNAPI ::glm::mat<4, 4, float, (glm::qualifier)0> const& getProjectionMatrix() const;

    MCNAPI std::optional<std::vector<ushort>> const& getRegistryEntryHandlesFilter() const;

    MCNAPI std::optional<dragon::rendering::RenderTargetTexture> const& getRenderTargetTexture() const;

    MCNAPI ::cg::math::Rect<ushort> const& getScissorRect() const;

    MCNAPI ::glm::mat<4, 4, float, (glm::qualifier)0> const& getViewMatrix() const;

    MCNAPI ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const& getViewport() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _initializeBaseCamera(
        ::dragon::rendering::Camera&,
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        ::cg::math::Rect<ushort> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::dragon::rendering::BufferClear const&,
        std::optional<std::vector<ushort>> const&,
        std::optional<dragon::rendering::RenderTargetTexture> const&
    );

    MCNAPI static ::dragon::rendering::Camera createExplicitTransform(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        ::cg::math::Rect<ushort> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::dragon::rendering::BufferClear const&,
        std::optional<std::vector<ushort>> const&,
        std::optional<dragon::rendering::RenderTargetTexture> const&,
        bool const
    );

    MCNAPI static ::dragon::rendering::Camera createOrthographic(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        ::cg::math::Rect<ushort> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::cg::math::Rect<float>,
        float const,
        float const,
        ::dragon::rendering::BufferClear const&,
        ::dragon::rendering::ClipSpaceDepthMode const,
        std::optional<std::vector<ushort>> const&,
        std::optional<dragon::rendering::RenderTargetTexture> const&
    );

    MCNAPI static ::dragon::rendering::Camera createOrthographic2D(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        ::cg::math::Rect<ushort> const&,
        ::cg::math::Rect<float>,
        float const,
        float const,
        ::dragon::rendering::BufferClear const&,
        ::dragon::rendering::ClipSpaceDepthMode const,
        std::optional<std::vector<ushort>> const&,
        std::optional<dragon::rendering::RenderTargetTexture> const&
    );

    MCNAPI static ::dragon::rendering::Camera createPerspective(
        ::cg::Viewport<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        ::cg::math::Rect<ushort> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        float const,
        float const,
        float const,
        ::dragon::rendering::BufferClear const&,
        ::dragon::rendering::ClipSpaceDepthMode const,
        std::optional<std::vector<ushort>> const&,
        std::optional<dragon::rendering::RenderTargetTexture> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::rendering::Camera&&);
    // NOLINTEND
};

} // namespace dragon::rendering
