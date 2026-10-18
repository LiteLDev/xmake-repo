#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CascadeUsage.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct PerCascadeDrawingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::framebuilder::CascadeUsage> mUsage;
    // NOLINTEND
};
#else // @header-generator platform
struct PerCascadeDrawingParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
