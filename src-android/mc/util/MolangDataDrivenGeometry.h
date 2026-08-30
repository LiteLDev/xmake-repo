#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
// clang-format on

struct MolangDataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenGeometry>> mGeometry;
    ::ll::TypedStorage<8, 40, ::HashedString>                    mName;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangDataDrivenGeometry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::MolangDataDrivenGeometry& operator=(::MolangDataDrivenGeometry const&);

    MCNAPI ~MolangDataDrivenGeometry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangDataDrivenGeometry const& getDefaultErrorValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
