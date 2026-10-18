#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

struct LegacyPackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd3a327;
    ::ll::UntypedStorage<8, 32> mUnk11a54a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const&);
    LegacyPackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LegacyPackIdVersion(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI LegacyPackIdVersion(::LegacyPackIdVersion const&);

    MCNAPI LegacyPackIdVersion(::std::string const& id, ::std::string const& version);
#endif // @header-generator platform

    MCNAPI ::PackIdVersion getUpgradedPackId() const;
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~LegacyPackIdVersion();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void* $ctor(::LegacyPackIdVersion const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& id, ::std::string const& version);
#endif // @header-generator platform
    // NOLINTEND
};
