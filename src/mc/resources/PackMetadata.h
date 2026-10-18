#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct EducationMetadata;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PackMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<EducationMetadata>> mEducationMetadata;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb81398;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI PackMetadata();

    MCNAPI explicit PackMetadata(std::unique_ptr<EducationMetadata>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::unique_ptr<EducationMetadata>);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PackMetadata& operator=(PackMetadata const&);
    PackMetadata(PackMetadata const&);
    PackMetadata();
#endif // @header-generator platform
};
