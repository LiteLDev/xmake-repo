#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Viewport.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/bgfx/ViewMode.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct ViewDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mViewMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mProjectionMatrix;
    ::ll::UntypedStorage<2, 8>                                            mViewportRect;
    ::ll::UntypedStorage<2, 8>                                            mScissorRect;
    ::ll::UntypedStorage<4, 4>                                            mViewMode;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPreviousViewMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mPreviousProjectionMatrix;
    ::ll::TypedStorage<4, 16, float[4]>                                   mPreviousWorldPosOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ViewDescription(::dragon::framerenderer::ViewDescription const&);

    MCNAPI ViewDescription(::dragon::framerenderer::ViewDescription&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::framerenderer::ViewDescription const&);

    MCNAPI void* $ctor(::dragon::framerenderer::ViewDescription&&);
    // NOLINTEND
};
#else // @header-generator platform
struct ViewDescription {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
