#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class LayoutComponent;
// clang-format on

struct PostOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LayoutComponent*> mLayout;
    ::ll::TypedStorage<8, 40, ::VariableRef>     mVariableRef;
    ::ll::UntypedStorage<8, 48>                  mOperation;
    ::ll::UntypedStorage<4, 16>                  postOpValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PostOperation& operator=(PostOperation const&);
    PostOperation(PostOperation const&);
    PostOperation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PostOperation();
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
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class LayoutComponent;
// clang-format on

struct PostOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LayoutComponent*>        mLayout;
    ::ll::TypedStorage<8, 40, ::VariableRef>            mVariableRef;
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mOperation;
    ::ll::TypedStorage<4, 4, float>                     postOpValue;
    // NOLINTEND
};
#else // @header-generator platform
struct PostOperation {};
#endif // @header-generator platform
#endif // @header-generator platform
