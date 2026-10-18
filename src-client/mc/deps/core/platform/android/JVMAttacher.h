#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"

namespace Bedrock {

class JVMAttacher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_JavaVM*> _vm;
    ::ll::TypedStorage<8, 8, ::_JNIEnv*> _env;
    // NOLINTEND

public:
    // prevent constructor by default
    JVMAttacher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JVMAttacher(::_JavaVM*);

    MCNAPI ::_JNIEnv* getEnv() const;

    MCNAPI explicit operator _JNIEnv*() const;

    MCNAPI ::_JNIEnv* operator->() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::_JavaVM*);
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
