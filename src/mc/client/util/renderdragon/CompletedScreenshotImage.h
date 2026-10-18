#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ResolvedImageResource.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renderdragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct CompletedScreenshotImage : public ::type_safe::strong_typedef<
                                      renderdragon::CompletedScreenshotImage,
                                      mce::ClientResourcePointer<dragon::ResolvedImageResource>> {};
#else // @header-generator platform
struct CompletedScreenshotImage {};
#endif // @header-generator platform

} // namespace renderdragon
