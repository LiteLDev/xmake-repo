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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                  mPackIdVersion;
    ::ll::TypedStorage<8, 8, ulong>              mPackSize;
    ::ll::TypedStorage<8, 24, std::string>       mContentKey;
    ::ll::TypedStorage<8, 24, std::string>       mSubpackName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::PackIdVersion>   mPackIdVersion;
    ::ll::TypedStorage<8, 8, uint64>             mPackSize;
    ::ll::TypedStorage<8, 32, ::std::string>     mContentKey;
    ::ll::TypedStorage<8, 32, ::std::string>     mSubpackName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<1, 1, bool>               mHasScripts;
    ::ll::TypedStorage<1, 1, bool>               mIsAddonPack;
    ::ll::TypedStorage<1, 1, bool>               mIsRayTracingCapable;
    ::ll::TypedStorage<1, 1, bool>               mHasExceptions;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>       mCDNUrl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>     mCDNUrl;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PackInfoData& operator=(PackInfoData const&);
    PackInfoData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackInfoData();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackInfoData(::PackInfoData const&);
#else // @header-generator platform
    MCAPI PackInfoData(::PackInfoData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI PackInfoData(
        ::mce::UUID const&       guid,
        ::SemVersion const&      version,
        uint64                   packSize,
        ::std::string const&     contentKey,
        ::std::string const&     subpackName,
        ::ContentIdentity const& contentIdentity,
        bool                     hasScripts,
        bool                     isAddonPack,
        bool                     isRayTracingCapable,
        ::std::string const&     cdnUrl
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::PackInfoData const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::PackInfoData& operator=(::PackInfoData&&);

    MCAPI ::PackInfoData& operator=(::PackInfoData const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PackInfoData();
#else // @header-generator platform
    MCAPI bool operator==(::PackInfoData const& info) const;

    MCAPI ~PackInfoData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackInfoData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::PackInfoData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::mce::UUID const&       guid,
        ::SemVersion const&      version,
        uint64                   packSize,
        ::std::string const&     contentKey,
        ::std::string const&     subpackName,
        ::ContentIdentity const& contentIdentity,
        bool                     hasScripts,
        bool                     isAddonPack,
        bool                     isRayTracingCapable,
        ::std::string const&     cdnUrl
#endif // @header-generator platform
    );
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
