#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace BlockSourceVisitor { struct VisitArgs; }
// clang-format on

namespace BlockSourceVisitor {

struct DefaultVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::vector<AABB>&> mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultVisitor& operator=(DefaultVisitor const&);
    DefaultVisitor(DefaultVisitor const&);
    DefaultVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const&);
    // NOLINTEND
};

} // namespace BlockSourceVisitor
