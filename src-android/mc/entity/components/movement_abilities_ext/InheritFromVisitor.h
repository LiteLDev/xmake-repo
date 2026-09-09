#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
struct MovementAbilitiesComponent;
namespace MovementAbilitiesExt { struct MovementAbilityInfo; }
// clang-format on

namespace MovementAbilitiesExt {

struct InheritFromVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MovementAbilitiesExt::MovementAbilityInfo const&> mInfo;
    ::ll::TypedStorage<8, 8, ::LayeredAbilities const&>                          mAbilities;
    ::ll::TypedStorage<8, 8, ::MovementAbilitiesComponent&>                      mComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    InheritFromVisitor& operator=(InheritFromVisitor const&);
    InheritFromVisitor(InheritFromVisitor const&);
    InheritFromVisitor();
};

} // namespace MovementAbilitiesExt
