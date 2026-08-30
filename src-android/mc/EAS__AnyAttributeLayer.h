#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class AttributeLayer; }
namespace EAS { class BiomeAttributeLayer; }
// clang-format on

namespace EAS {

class AnyAttributeLayer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::variant<std::unique_ptr<EAS::AttributeLayer>, std::unique_ptr<EAS::BiomeAttributeLayer>>> mLayer;
    // clang-format on
    // NOLINTEND
};

} // namespace EAS
