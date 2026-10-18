#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/renderer/hal/interface/ImmediateBuffer.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct ImmediateBufferResourceService : public ::mce::CheckedResourceService<mce::ImmediateBuffer> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ImmediateBufferResourceService();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ImmediateBufferResourceService {};
#endif // @header-generator platform

} // namespace mce
