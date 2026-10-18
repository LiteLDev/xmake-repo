#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

struct PackInstanceId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>            mPackId;
    ::ll::TypedStorage<8, 24, std::string> mSubpackName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::PackIdVersion> mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>   mSubpackName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const&);
    PackInstanceId();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackInstanceId(::PackIdVersion const&, std::string const&);
#else // @header-generator platform
    MCAPI PackInstanceId(::PackInstanceId const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackInstanceId& operator=(::PackInstanceId const&);
#else // @header-generator platform
    MCAPI PackInstanceId(::PackIdVersion const& packId, ::std::string const& subpackName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::PackInstanceId const&) const;

    MCNAPI ~PackInstanceId();
#else // @header-generator platform
    MCAPI ~PackInstanceId();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackIdVersion const&, std::string const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::PackInstanceId const&);

    MCAPI void* $ctor(::PackIdVersion const& packId, ::std::string const& subpackName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
