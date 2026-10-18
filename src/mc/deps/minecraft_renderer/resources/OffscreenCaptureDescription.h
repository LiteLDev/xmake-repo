#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/AtlasTileCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"

struct OffscreenCaptureDescription : public ::std::variant<
                                         std::monostate,
                                         AtlasTileCaptureDescription,
                                         UIThumbnailMeshOffscreenCaptureDescription,
                                         UIStructureVolumeOffscreenCaptureDescription> {
public:
    // prevent constructor by default
    OffscreenCaptureDescription(OffscreenCaptureDescription const&);
};
#else // @header-generator platform
struct OffscreenCaptureDescription {};
#endif // @header-generator platform
