#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/BackendProviderType.h"

class HydrateParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mProductId;
    ::ll::TypedStorage<8, 24, std::string>          mLastModifiedDate;
    ::ll::TypedStorage<1, 1, bool>                  mDisableCachedResponseOnFailure;
    ::ll::TypedStorage<4, 4, ::BackendProviderType> mBackendProviderType;
    // NOLINTEND

public:
    // prevent constructor by default
    HydrateParams& operator=(HydrateParams const&);
    HydrateParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HydrateParams(std::string const&, std::string const&);

    MCNAPI void disableCachedResponseOnFailure();

    MCNAPI ~HydrateParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class HydrateParams {};
#endif // @header-generator platform
