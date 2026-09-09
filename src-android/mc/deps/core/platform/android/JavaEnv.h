#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/core/platform/android/JVMAttacher.h"

namespace Bedrock {

class JavaEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::JVMAttacher> jvmAttacher;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::_JNIEnv* getEnv();

    MCNAPI ::_JNIEnv* operator->();

    MCNAPI ~JavaEnv();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
