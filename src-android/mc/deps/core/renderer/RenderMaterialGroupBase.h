#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class RenderMaterialInfo; }
// clang-format on

namespace mce {

class RenderMaterialGroupBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderMaterialGroupBase() = default;

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const&) = 0;

    virtual void clearMaterial(::HashedString const&) = 0;
    // NOLINTEND
};

} // namespace mce
