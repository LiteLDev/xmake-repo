#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace mce { class UUID; }
// clang-format on

struct PackInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                  mPackIdVersion;
    ::ll::TypedStorage<8, 8, ulong>              mPackSize;
    ::ll::TypedStorage<8, 24, std::string>       mContentKey;
    ::ll::TypedStorage<8, 24, std::string>       mSubpackName;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<1, 1, bool>               mHasScripts;
    ::ll::TypedStorage<1, 1, bool>               mIsAddonPack;
    ::ll::TypedStorage<1, 1, bool>               mIsRayTracingCapable;
    ::ll::TypedStorage<1, 1, bool>               mHasExceptions;
    ::ll::TypedStorage<8, 24, std::string>       mCDNUrl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackInfoData(::PackInfoData const&);

    MCNAPI PackInfoData(
        ::mce::UUID const&,
        ::SemVersion const&,
        ulong,
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        bool,
        bool,
        bool,
        std::string const&
    );

    MCNAPI bool operator==(::PackInfoData const&) const;

    MCNAPI ~PackInfoData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackInfoData const&);

    MCNAPI void* $ctor(
        ::mce::UUID const&,
        ::SemVersion const&,
        ulong,
        std::string const&,
        std::string const&,
        ::ContentIdentity const&,
        bool,
        bool,
        bool,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
