#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

namespace dragon {

class RenderMetadataFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::RenderMetadata createRenderMetadata(
        long const,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const&,
        bool const,
        ::OffscreenCaptureDescription const&
    );
    // NOLINTEND
};

} // namespace dragon
