#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

namespace dragon::rendering {

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

} // namespace dragon::rendering
