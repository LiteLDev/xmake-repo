#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/threading/SharedLock.h"

class UIControlFactoryContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mLock;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControlFactoryContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UIControlFactoryContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/threading/SharedLock.h"

class UIControlFactoryContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedLock<::std::shared_mutex>> mLock;
    // NOLINTEND
};
#else // @header-generator platform
class UIControlFactoryContext {};
#endif // @header-generator platform
#endif // @header-generator platform
