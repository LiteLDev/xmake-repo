#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
struct MovementAbilitiesComponent;
namespace MovementAbilitiesExt { struct MovementAbilityInfo; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementAbilitiesExt {

struct InheritFromVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MovementAbilitiesExt::MovementAbilityInfo const&> mInfo;
    ::ll::TypedStorage<8, 8, ::LayeredAbilities const&>                          mAbilities;
    ::ll::TypedStorage<8, 8, ::MovementAbilitiesComponent&>                      mComponent;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk44a2ca;
    ::ll::UntypedStorage<8, 8> mUnkde6ac1;
    ::ll::UntypedStorage<8, 8> mUnkea36c6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InheritFromVisitor& operator=(InheritFromVisitor const&);
    InheritFromVisitor(InheritFromVisitor const&);
    InheritFromVisitor();
};

} // namespace MovementAbilitiesExt
