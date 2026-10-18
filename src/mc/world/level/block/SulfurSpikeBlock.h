#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SpeleothemBlock.h"

class SulfurSpikeBlock : public ::SpeleothemBlock {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SulfurSpikeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SulfurSpikeBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SulfurSpikeBlock(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
