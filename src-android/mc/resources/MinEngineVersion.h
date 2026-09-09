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
    ::ll::UntypedStorage<8, 24>                   mSemVersion;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<2, 2, ::MolangVersion>     mMolangVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinEngineVersion();

    MCNAPI std::string asString() const;

    MCNAPI ::CurrentCmdVersion getCommandVersion() const;

    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI ::SemVersion getSemVersion() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator==(::MinEngineVersion const&) const;

    MCNAPI ~MinEngineVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MinEngineVersion fromString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
