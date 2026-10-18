#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mPopulationControl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mPopulationControl;
    // NOLINTEND

public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Description(::SharedTypes::Legacy::Spawn::Description const&);

    MCFOLD ::SharedTypes::Legacy::Spawn::Description& operator=(::SharedTypes::Legacy::Spawn::Description&&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Legacy::Spawn::Description const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
