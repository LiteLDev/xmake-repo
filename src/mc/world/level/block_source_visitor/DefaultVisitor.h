#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
namespace BlockSourceVisitor { struct VisitArgs; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace BlockSourceVisitor {

struct DefaultVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<AABB>&> mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk9e0a4f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultVisitor& operator=(DefaultVisitor const&);
    DefaultVisitor(DefaultVisitor const&);
    DefaultVisitor();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace BlockSourceVisitor
