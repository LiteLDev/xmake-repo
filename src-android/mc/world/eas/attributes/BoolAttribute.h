#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttribute.h"

// auto generated forward declare list
// clang-format off
namespace EAS { struct BoolAttributeData; }
namespace EAS { template<typename T0> class NoConstraint; }
// clang-format on

namespace EAS {

class BoolAttribute : public ::EAS::EnvironmentAttribute<bool, EAS::BoolModifier, EAS::NoConstraint<bool>> {
public:
    // prevent constructor by default
    BoolAttribute();
};

} // namespace EAS
