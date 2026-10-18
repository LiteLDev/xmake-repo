#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Identity {

struct EduAuthParameters {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64>                          mGetMessSigningPublicKeys;
    ::ll::TypedStorage<8, 24, std::string>               mGameVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk1cd659;
    ::ll::UntypedStorage<8, 32> mUnkf114cb;
    ::ll::UntypedStorage<8, 8>  mUnkd3647c;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduAuthParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    EduAuthParameters& operator=(EduAuthParameters const&);
    EduAuthParameters(EduAuthParameters const&);
    EduAuthParameters();
#endif // @header-generator platform
};

} // namespace Identity
