#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/RuntimeCondition.h"

namespace Scripting {

class RuntimeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RuntimeCondition>> mRuntimeConditions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RuntimeConditions(::Scripting::RuntimeConditions const&);

    MCNAPI bool empty() const;

    MCNAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const&);

    MCNAPI ::Scripting::RuntimeConditions& operator=(::Scripting::RuntimeConditions const&);

    MCNAPI std::string toString() const;

    MCNAPI ~RuntimeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
