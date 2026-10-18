#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureIntegrityProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntegrity;
    ::ll::TypedStorage<4, 4, uint>  mStartSeed;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    StructureIntegrityProcessor();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureIntegrityProcessor(float, uint);

    MCNAPI std::vector<bool> generateFlagsForIndices(int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, uint);
#else // @header-generator platform
    MCAPI ::std::vector<bool> generateFlagsForIndices(int startIndex, int endIndex) const;
#endif // @header-generator platform
    // NOLINTEND
};
