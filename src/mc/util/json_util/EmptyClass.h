#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/MinEngineVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonUtil {

class EmptyClass {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EmptyClass inner types define
    using _TLocalType = ::JsonUtil::EmptyClass;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mMinEngineVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk221ded;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EmptyClass& operator=(EmptyClass const&);
    EmptyClass(EmptyClass const&);
    EmptyClass();
#endif // @header-generator platform
};

} // namespace JsonUtil
