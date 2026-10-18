#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/eas/attributes/modifiers/FloatAttributeOperation.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

struct FloatAttributeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                          mValue;
    ::ll::TypedStorage<4, 4, ::EAS::FloatAttributeOperation> mOperation;
    ::ll::TypedStorage<4, 8, std::optional<float>>           mConstraintMinValue;
    ::ll::TypedStorage<4, 8, std::optional<float>>           mConstraintMaxValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkb4158d;
    ::ll::UntypedStorage<4, 4> mUnk9ad6f3;
    ::ll::UntypedStorage<4, 8> mUnkb5e228;
    ::ll::UntypedStorage<4, 8> mUnkcb6a3e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FloatAttributeData& operator=(FloatAttributeData const&);
    FloatAttributeData(FloatAttributeData const&);
    FloatAttributeData();
#endif // @header-generator platform
};

} // namespace EAS
