#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"

namespace Bedrock {

class JStringToString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUTFString;
    // NOLINTEND

public:
    // prevent constructor by default
    JStringToString& operator=(JStringToString const&);
    JStringToString(JStringToString const&);
    JStringToString();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JStringToString(::_JNIEnv*, ::_jstring*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::_JNIEnv*, ::_jstring*);
    // NOLINTEND
};

} // namespace Bedrock
