#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/UpgraderBase.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class LoadResultAny; }
// clang-format on

class FeatureUpgrader : public ::Puv::UpgraderBase {
public:
    // prevent constructor by default
    FeatureUpgrader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureUpgrader();

    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
