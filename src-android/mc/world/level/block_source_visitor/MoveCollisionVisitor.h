#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockSourceVisitor { struct CollisionShape; }
namespace BlockSourceVisitor { struct VisitArgs; }
// clang-format on

namespace BlockSourceVisitor {

struct MoveCollisionVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<BlockSourceVisitor::CollisionShape>&> mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveCollisionVisitor& operator=(MoveCollisionVisitor const&);
    MoveCollisionVisitor(MoveCollisionVisitor const&);
    MoveCollisionVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const&);
    // NOLINTEND
};

} // namespace BlockSourceVisitor
