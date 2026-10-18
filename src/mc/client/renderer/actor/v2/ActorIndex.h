#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorIndex : public ::type_safe::strong_typedef<ActorIndex, uint>,
                    public ::type_safe::strong_typedef_op::equality_comparison<ActorIndex>,
                    public ::type_safe::strong_typedef_op::relational_comparison<ActorIndex> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ActorIndex : public ::type_safe::strong_typedef<::ActorIndex, uint>,
                    public ::type_safe::strong_typedef_op::equality_comparison<::ActorIndex>,
                    public ::type_safe::strong_typedef_op::relational_comparison<::ActorIndex> {};
#else // @header-generator platform
struct ActorIndex {};
#endif // @header-generator platform
#endif // @header-generator platform
