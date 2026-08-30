#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandListTaskContext;
namespace cg::details { class WorkToken; }
// clang-format on

class CommandListFuture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mWork;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommandListFuture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
