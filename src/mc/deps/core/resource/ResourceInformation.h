#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ResourceInformation {
public:
    // ResourceInformation inner types define
    enum class ResourceType : int {
        Invalid           = 0,
        Resources         = 1,
        DataAddOn         = 2,
        ScriptAddOn       = 3,
        ClientScriptAddOn = 4,
        Mandatory         = 5,
        WorldTemplate     = 6,
        Count             = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mDescription;
    ::ll::UntypedStorage<8, 24>                                   mVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      mDescription;
    ::ll::TypedStorage<8, 24, ::SemVersion>                       mVersion;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mUUID;
    ::ll::TypedStorage<4, 4, ::ResourceInformation::ResourceType> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mLanguage;
    ::ll::TypedStorage<8, 24, std::string>                        mEntry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      mLanguage;
    ::ll::TypedStorage<8, 32, ::std::string>                      mEntry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceInformation(::ResourceInformation const&);
#else // @header-generator platform
    MCAPI ResourceInformation(::ResourceInformation const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceInformation(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        std::string const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI ResourceInformation(
        ::std::string const& description,
        ::SemVersion const&  version,
        ::mce::UUID const&   uuid,
        ::std::string const& type,
        ::std::string const& language,
        ::std::string const& entry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceInformation(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        ::ResourceInformation::ResourceType,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI ResourceInformation(
        ::std::string const&                description,
        ::SemVersion const&                 version,
        ::mce::UUID const&                  uuid,
        ::ResourceInformation::ResourceType type,
        ::std::string const&                language,
        ::std::string const&                entry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool satisfies(::PackIdVersion const&) const;

    MCNAPI ~ResourceInformation();
#else // @header-generator platform
    MCAPI ~ResourceInformation();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(std::string const&);

    MCNAPI static std::string const& StringFromResourceType(::ResourceInformation::ResourceType);
#else // @header-generator platform
    MCAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(::std::string const& value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourceInformation const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ResourceInformation const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        std::string const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& description,
        ::SemVersion const&  version,
        ::mce::UUID const&   uuid,
        ::std::string const& type,
        ::std::string const& language,
        ::std::string const& entry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        ::ResourceInformation::ResourceType,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&                description,
        ::SemVersion const&                 version,
        ::mce::UUID const&                  uuid,
        ::ResourceInformation::ResourceType type,
        ::std::string const&                language,
        ::std::string const&                entry
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
