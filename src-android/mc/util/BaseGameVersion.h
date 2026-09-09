#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

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
    ::ll::UntypedStorage<8, 24>    mSemVersion;
    ::ll::TypedStorage<1, 1, bool> mNeverCompatible;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameVersion& operator=(BaseGameVersion const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGameVersion(ushort, uint, uint);

    MCNAPI std::string asString() const;

    MCNAPI ushort getMajor() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const&, ::BaseGameVersion&);

    MCNAPI static ::SemVersion::MatchType fromString(std::string const&, ::BaseGameVersion&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& ANY();

    MCNAPI static ::BaseGameVersion::any_version_constructor const& AnyVersionConstructor();

    MCNAPI static ::BaseGameVersion const& EMPTY();

    MCNAPI static ::BaseGameVersion const& INCOMPATIBLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort, uint, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
