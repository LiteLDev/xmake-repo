#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace BlockSourceVisitor { struct CollisionShape; }
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockSourceVisitor { struct VisitArgs; }
// clang-format on

namespace BlockSourceVisitor {

struct MoveCollisionVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<BlockSourceVisitor::CollisionShape>&> mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc2e4c1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MoveCollisionVisitor& operator=(MoveCollisionVisitor const&);
    MoveCollisionVisitor(MoveCollisionVisitor const&);
    MoveCollisionVisitor();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const&);
#else // @header-generator platform
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const& args);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockSourceVisitor
