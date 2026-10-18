#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureData.h"

struct UIThumbnailMeshOffscreenCaptureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OffscreenCaptureData> mCaptureData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureData.h"

struct UIThumbnailMeshOffscreenCaptureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OffscreenCaptureData> mCaptureData;
    // NOLINTEND
};
#else // @header-generator platform
struct UIThumbnailMeshOffscreenCaptureDescription {};
#endif // @header-generator platform
#endif // @header-generator platform
