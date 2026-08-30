#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class BlockCerealSchemaUpgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCerealSchemaUpgrade();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCerealSchemaUpgrade();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockCerealSchemaUpgrade(::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
