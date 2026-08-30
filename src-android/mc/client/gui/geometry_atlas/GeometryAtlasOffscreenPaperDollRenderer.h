#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/GeometryAtlasCapture.h"
#include "mc/client/gui/geometry_atlas/IOffscreenPaperDollRenderer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IGeometryAtlasCaptureService; }
namespace GeometryAtlas { class IPaperDollHandleFactory; }
// clang-format on

namespace GeometryAtlas {

class GeometryAtlasOffscreenPaperDollRenderer : public ::GeometryAtlas::IOffscreenPaperDollRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<GeometryAtlas::IGeometryAtlas>>               mAtlas;
    ::ll::TypedStorage<8, 16, std::weak_ptr<GeometryAtlas::IGeometryAtlasCaptureService>> mCaptureService;
    ::ll::UntypedStorage<8, 24>                                                           mCapture;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GeometryAtlas::IPaperDollHandleFactory>>     mFactory;
    // NOLINTEND
};

} // namespace GeometryAtlas
