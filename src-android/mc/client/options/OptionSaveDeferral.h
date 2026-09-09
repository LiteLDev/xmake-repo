#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

class OptionSaveDeferral {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IOptionRegistry>> mOptions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OptionSaveDeferral();

    MCNAPI ::OptionSaveDeferral& operator=(::OptionSaveDeferral&&);

    MCNAPI void reset();

    MCNAPI ~OptionSaveDeferral();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
