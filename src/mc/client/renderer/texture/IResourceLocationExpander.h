#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

class IResourceLocationExpander {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceLocationExpander();

    virtual ::ResourceLocation getFullPath(::ResourceLocation const&, ::gsl::span<const std::string>) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class IResourceLocationExpander {};
#endif // @header-generator platform
