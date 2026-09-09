#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace mce {

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

} // namespace mce
