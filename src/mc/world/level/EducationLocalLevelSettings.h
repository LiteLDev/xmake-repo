#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationLocalLevelSettings {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> codeBuilderOverrideUri;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> codeBuilderOverrideUri;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EducationLocalLevelSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
