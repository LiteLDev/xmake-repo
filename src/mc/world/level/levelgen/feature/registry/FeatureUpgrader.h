#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/UpgraderBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
#endif // @header-generator platform
namespace Puv { class LoadResultAny; }
// clang-format on

class FeatureUpgrader : public ::Puv::UpgraderBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FeatureUpgrader();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FeatureUpgrader();

    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny source) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny) const;
#else // @header-generator platform
    MCAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny source) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
