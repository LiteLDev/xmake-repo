#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ConfigInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsCommit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBranch;
    ::ll::TypedStorage<8, 24, std::string> mReference;
    ::ll::TypedStorage<8, 24, std::string> mProtocol;
    ::ll::TypedStorage<8, 24, std::string> mReleaseDateString;
    ::ll::TypedStorage<8, 8, ulong>        mReleaseDate;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsCommit(::Realms::RealmsCommit const&);

    MCNAPI ~RealmsCommit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::RealmsCommit const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsCommit {};
#endif // @header-generator platform

} // namespace Realms
