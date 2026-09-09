#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
