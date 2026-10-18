#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MinEngineVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                   mSemVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SemVersion>       mSemVersion;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>     mMolangVersion;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    MinEngineVersion();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MinEngineVersion();
#else // @header-generator platform
    MCAPI explicit MinEngineVersion(::SemVersion const& version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string asString() const;
#else // @header-generator platform
    MCAPI ::Json::Value createJsonValue() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CurrentCmdVersion getCommandVersion() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::SemVersion getSemVersion() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI ::SemVersion getSemVersion() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::MinEngineVersion const&) const;

    MCNAPI ~MinEngineVersion();
#else // @header-generator platform
    MCAPI bool operator==(::MinEngineVersion const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MinEngineVersion fromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::MinEngineVersion fromString(::std::string const& string);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SemVersion const& version);
#endif // @header-generator platform
    // NOLINTEND
};
