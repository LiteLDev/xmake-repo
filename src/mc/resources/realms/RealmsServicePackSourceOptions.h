#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Realms {

struct RealmsServicePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                                mBase;
    ::ll::TypedStorage<8, 8, long>                                               mRealmId;
    ::ll::UntypedStorage<1, 1>                                                   mType;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mAppliedContent;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk89b58d;
    ::ll::UntypedStorage<8, 8>  mUnkacc78b;
    ::ll::UntypedStorage<1, 1>  mUnk7fa56f;
    ::ll::UntypedStorage<8, 24> mUnkf9818a;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmsServicePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RealmsServicePackSourceOptions& operator=(RealmsServicePackSourceOptions const&);
    RealmsServicePackSourceOptions(RealmsServicePackSourceOptions const&);
    RealmsServicePackSourceOptions();
#endif // @header-generator platform
};

} // namespace Realms
