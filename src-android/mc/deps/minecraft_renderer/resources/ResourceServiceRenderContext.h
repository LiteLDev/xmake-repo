#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

class ResourceServiceRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<mce::RenderContext*>> mRenderContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceServiceRenderContext();
};

} // namespace mce
