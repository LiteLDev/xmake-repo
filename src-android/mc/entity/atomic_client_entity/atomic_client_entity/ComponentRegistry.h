#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AtomicClientEntity { class ComponentInitializer; }
// clang-format on

namespace AtomicClientEntity {

class ComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<AtomicClientEntity::ComponentInitializer>>> mInitializers;
    // clang-format on
    // NOLINTEND
};

} // namespace AtomicClientEntity
