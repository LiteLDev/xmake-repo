#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct LocalTransferWorldName : public ::type_safe::strong_typedef<LocalTransferWorldName, std::string>,
                                public ::type_safe::strong_typedef_op::equality_comparison<LocalTransferWorldName> {
public:
    // prevent constructor by default
    LocalTransferWorldName& operator=(LocalTransferWorldName const&);
    LocalTransferWorldName();
};
#else // @header-generator platform
struct LocalTransferWorldName {};
#endif // @header-generator platform
