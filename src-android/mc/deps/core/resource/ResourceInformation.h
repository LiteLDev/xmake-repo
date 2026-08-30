#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

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
    ::ll::TypedStorage<8, 24, std::string>                        mDescription;
    ::ll::UntypedStorage<8, 24>                                   mVersion;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mUUID;
    ::ll::TypedStorage<4, 4, ::ResourceInformation::ResourceType> mType;
    ::ll::TypedStorage<8, 24, std::string>                        mLanguage;
    ::ll::TypedStorage<8, 24, std::string>                        mEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceInformation(::ResourceInformation const&);

    MCNAPI ResourceInformation(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI ResourceInformation(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        ::ResourceInformation::ResourceType,
        std::string const&,
        std::string const&
    );

    MCNAPI bool satisfies(::PackIdVersion const&) const;

    MCNAPI ~ResourceInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(std::string const&);

    MCNAPI static std::string const& StringFromResourceType(::ResourceInformation::ResourceType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceInformation const&);

    MCNAPI void* $ctor(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        std::string const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void* $ctor(
        std::string const&,
        ::SemVersion const&,
        ::mce::UUID const&,
        ::ResourceInformation::ResourceType,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
