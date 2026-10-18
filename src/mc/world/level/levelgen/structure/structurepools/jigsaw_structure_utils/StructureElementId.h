#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JigsawStructureUtils {

class StructureElementId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureElementId& operator=(StructureElementId const&);
    StructureElementId(StructureElementId const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StructureElementId(std::string);

    MCNAPI std::string release();
#else // @header-generator platform
    MCAPI ~StructureElementId();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string);
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace JigsawStructureUtils
