#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/entity/components/TagsComponentBase.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class TagsComponent {};
#else // @header-generator platform
template <typename T>
class TagsComponent : public TagsComponentBase {
public:
    T mTagSetID;
};
#endif // @header-generator platform
