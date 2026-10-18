#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace AtomicClientEntity { class ComponentInitializer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace AtomicClientEntity {

class ComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<AtomicClientEntity::ComponentInitializer>>> mInitializers;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8fef4c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComponentRegistry& operator=(ComponentRegistry const&);
    ComponentRegistry(ComponentRegistry const&);
    ComponentRegistry();
#endif // @header-generator platform
};

} // namespace AtomicClientEntity
