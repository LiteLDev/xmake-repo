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
    // prevent constructor by default
    StructureIntegrityProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureIntegrityProcessor(float, uint);

    MCNAPI std::vector<bool> generateFlagsForIndices(int, int) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, uint);
    // NOLINTEND
};
