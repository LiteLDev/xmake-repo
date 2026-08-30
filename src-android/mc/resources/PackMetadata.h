#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct EducationMetadata;
// clang-format on

class PackMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<EducationMetadata>> mEducationMetadata;
    // NOLINTEND

public:
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
};
