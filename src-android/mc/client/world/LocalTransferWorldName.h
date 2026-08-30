#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LocalTransferWorldName : public ::type_safe::strong_typedef<LocalTransferWorldName, std::string>,
                                public ::type_safe::strong_typedef_op::equality_comparison<LocalTransferWorldName> {
public:
    // prevent constructor by default
    LocalTransferWorldName& operator=(LocalTransferWorldName const&);
    LocalTransferWorldName();
};
