#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OffscreenCaptureDescription;
namespace dragon { struct RenderMetadata; }
namespace mce::framebuilder { struct CustomSurfaceShaderMetadata; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderMetadataFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::RenderMetadata createRenderMetadata(
        int64 const                                             id,
        ::mce::framebuilder::CustomSurfaceShaderMetadata const& cssMetadata,
        bool const                                              isItem,
        ::OffscreenCaptureDescription const&                    offscreenCaptureDescription
    );
    // NOLINTEND
};
#else // @header-generator platform
class RenderMetadataFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace dragon
