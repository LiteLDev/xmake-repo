#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"

namespace Bedrock {

class StringToJString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_JNIEnv&>  mEnv;
    ::ll::TypedStorage<8, 8, ::_jstring*> mJString;
    // NOLINTEND

public:
    // prevent constructor by default
    StringToJString& operator=(StringToJString const&);
    StringToJString();
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
