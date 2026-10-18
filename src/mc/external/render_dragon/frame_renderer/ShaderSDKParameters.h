#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShaderSDKParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMaterialServiceIP;
    ::ll::TypedStorage<2, 2, ushort>       mMaterialServicePort;
    ::ll::TypedStorage<2, 2, ushort>       mTargetPort;
    // NOLINTEND

public:
    // prevent constructor by default
    ShaderSDKParameters& operator=(ShaderSDKParameters const&);
    ShaderSDKParameters();
};
#else // @header-generator platform
struct ShaderSDKParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
