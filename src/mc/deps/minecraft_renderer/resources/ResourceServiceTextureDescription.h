#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResourceServiceTextureDescription : public ::mce::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceTextureDescription& operator=(ResourceServiceTextureDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ResourceServiceTextureDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceServiceTextureDescription {};
#endif // @header-generator platform

} // namespace mce
