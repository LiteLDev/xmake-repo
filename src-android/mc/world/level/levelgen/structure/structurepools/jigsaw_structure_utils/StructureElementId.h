#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JigsawStructureUtils {

class StructureElementId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureElementId& operator=(StructureElementId const&);
    StructureElementId(StructureElementId const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructureElementId(std::string);

    MCNAPI std::string release();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string);
    // NOLINTEND
};

} // namespace JigsawStructureUtils
