#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
class AverageLuminanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mPrevTime;
    ::ll::UntypedStorage<8, 32>                                                           mAdaptedFrameLuminance;
    ::ll::UntypedStorage<8, 32>                                                           mPreviousFrameLuminance;
    ::ll::TypedStorage<1, 1, bool>                                                        mBufferContentsValid;
    // NOLINTEND
};
#else // @header-generator platform
class AverageLuminanceData {};
#endif // @header-generator platform

} // namespace dragon::rendering
