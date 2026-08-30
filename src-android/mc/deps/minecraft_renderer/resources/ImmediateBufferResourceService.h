#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/renderer/hal/interface/ImmediateBuffer.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

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

} // namespace mce
