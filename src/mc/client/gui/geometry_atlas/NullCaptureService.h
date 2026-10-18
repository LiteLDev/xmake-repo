#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon::atlas { class IAtlasRenderOperations; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class NullCaptureService : public ::GeometryAtlas::IGeometryAtlasCaptureService {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NullCaptureService : public ::GeometryAtlas::IGeometryAtlasCaptureService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void processCaptureRequests(::dragon::atlas::IAtlasRenderOperations&) /*override*/;

    virtual ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&&) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class NullCaptureService {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
