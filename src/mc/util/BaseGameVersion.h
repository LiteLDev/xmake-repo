#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BaseGameVersion {
public:
    // BaseGameVersion inner types declare
    // clang-format off
    struct any_version_constructor;
    // clang-format on

    // BaseGameVersion inner types define
    struct any_version_constructor {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mSemVersion;
    ::ll::TypedStorage<1, 1, bool> mNeverCompatible;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion> mSemVersion;
    ::ll::TypedStorage<1, 1, bool>          mNeverCompatible;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameVersion& operator=(BaseGameVersion const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BaseGameVersion();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseGameVersion(ushort, uint, uint);
#else // @header-generator platform
    MCAPI BaseGameVersion(::BaseGameVersion const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string asString() const;
#else // @header-generator platform
    MCAPI bool isCompatibleWith(::BaseGameVersion const& baseGameVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getMajor() const;
#else // @header-generator platform
    MCAPI bool operator!=(::BaseGameVersion const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getMinor() const;

    MCNAPI ushort getPatch() const;

    MCNAPI bool isAnyVersion() const;

    MCNAPI bool isCompatibleWith(::BaseGameVersion const&) const;

    MCNAPI bool isNeverCompatible() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::BaseGameVersion const&) const;

    MCNAPI bool operator<(::BaseGameVersion const&) const;

    MCNAPI bool operator<=(::BaseGameVersion const&) const;

    MCNAPI bool operator==(::BaseGameVersion const&) const;

    MCNAPI bool operator>(::BaseGameVersion const&) const;

    MCNAPI bool operator>=(::BaseGameVersion const&) const;

    MCNAPI ~BaseGameVersion();
#else // @header-generator platform
    MCAPI bool operator==(::BaseGameVersion const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const&, ::BaseGameVersion&);

    MCNAPI static ::SemVersion::MatchType fromString(std::string const&, ::BaseGameVersion&);
#else // @header-generator platform
    MCAPI static ::SemVersion::MatchType fromString(::std::string const& source, ::BaseGameVersion& output);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& ANY();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& ANY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion::any_version_constructor const& AnyVersionConstructor();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& EMPTY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BaseGameVersion const& EMPTY();

    MCNAPI static ::BaseGameVersion const& INCOMPATIBLE();
#else // @header-generator platform
    MCAPI static ::BaseGameVersion const& INCOMPATIBLE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ushort, uint, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BaseGameVersion const& rhs);
#endif // @header-generator platform
    // NOLINTEND
};
