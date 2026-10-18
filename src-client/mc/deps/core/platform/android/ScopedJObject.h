#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"

namespace Bedrock {

class ScopedJObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_jobject*> mObject;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedJObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScopedJObject(::_jobject*);

    MCNAPI void _addRef();

    MCNAPI void _removeRef();

    MCNAPI explicit operator _jobject*() const;

    MCNAPI ::Bedrock::ScopedJObject& operator=(::Bedrock::ScopedJObject&&);

    MCNAPI ~ScopedJObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::_jobject*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
