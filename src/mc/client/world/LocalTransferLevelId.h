#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct LocalTransferLevelId : public ::type_safe::strong_typedef<LocalTransferLevelId, std::string>,
                              public ::type_safe::strong_typedef_op::equality_comparison<LocalTransferLevelId> {
public:
    // prevent constructor by default
    LocalTransferLevelId& operator=(LocalTransferLevelId const&);
    LocalTransferLevelId();
};
#else // @header-generator platform
struct LocalTransferLevelId {};
#endif // @header-generator platform
