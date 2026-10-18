#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/RenderContextNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class RenderDevice; }
namespace mce { struct ViewportInfo; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/RenderContextNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ViewportInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class RenderContext : public ::mce::RenderContextNull, public ::mce::deprecated::ResourceBase<mce::RenderContextNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWithinFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void beginFrame();

    MCNAPI bool captureScreenAsRGB(std::vector<uchar>&, int&, int&);

    MCNAPI void clearColorBuffer(::mce::Color const&, ::mce::ViewportInfo const*);

    MCNAPI void clearContextState();

    MCNAPI void clearDepthStencilBuffer(float const, uchar const, ::mce::ViewportInfo const*);

    MCNAPI void endFrame();

    MCNAPI void flush();

    MCNAPI ::mce::RenderDevice* getDevice() const;

    MCNAPI bool isWithinFrame();

    MCNAPI void setScissorRect(int const, int const, uint const, uint const);

    MCNAPI void setViewportWithFullScissor(::mce::ViewportInfo const&);

    MCNAPI void unbindAllTexturesAndShaders();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderContext : public ::mce::RenderContextNull,
                      public ::mce::deprecated::ResourceBase<::mce::RenderContextNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWithinFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setViewportWithFullScissor(::mce::ViewportInfo const& viewportInfo);
    // NOLINTEND
};
#else // @header-generator platform
class RenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
