#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalTransferLevelId : public ::type_safe::strong_typedef<LocalTransferLevelId, std::string>,
                              public ::type_safe::strong_typedef_op::equality_comparison<LocalTransferLevelId> {
public:
    // prevent constructor by default
    LocalTransferLevelId& operator=(LocalTransferLevelId const&);
    LocalTransferLevelId();
};
