#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
// clang-format on

class VanillaBlockTypeComponentAdder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType&> mBlockType;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockTypeComponentAdder& operator=(VanillaBlockTypeComponentAdder const&);
    VanillaBlockTypeComponentAdder(VanillaBlockTypeComponentAdder const&);
    VanillaBlockTypeComponentAdder();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VanillaBlockTypeComponentAdder(::HashedString const& blockName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& blockName);
    // NOLINTEND
#endif // @header-generator platform
};
