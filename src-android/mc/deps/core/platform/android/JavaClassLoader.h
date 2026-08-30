#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class JavaEnv; }
// clang-format on

namespace Bedrock {

class JavaClassLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_jobject*>   mClassLoader;
    ::ll::TypedStorage<8, 8, ::_jmethodID*> mFindClassMethod;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool configure(::_JavaVM*, char const*);

    MCNAPI ::_jclass* findClass(::_JNIEnv*, char const*);

    MCNAPI ::_jclass* findClass(::Bedrock::JavaEnv&, char const*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::JavaClassLoader& getSharedInstance();
    // NOLINTEND
};

} // namespace Bedrock
