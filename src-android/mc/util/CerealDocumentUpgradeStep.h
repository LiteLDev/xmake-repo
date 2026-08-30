#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
// clang-format on

class CerealDocumentUpgradeStep {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                  mTargetVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<CerealSchemaUpgrade>>> mUpgrades;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealDocumentUpgradeStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CerealDocumentUpgradeStep();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealDocumentUpgradeStep(::CerealDocumentUpgradeStep const&);

    MCNAPI bool apply(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CerealDocumentUpgradeStep const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
