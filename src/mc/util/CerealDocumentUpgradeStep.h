#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgrade;
#else // @header-generator platform
class SemVersion;
#endif // @header-generator platform
// clang-format on

class CerealDocumentUpgradeStep {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                  mTargetVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<CerealSchemaUpgrade>>> mUpgrades;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkdb1730;
    ::ll::UntypedStorage<8, 24> mUnkd390b2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CerealDocumentUpgradeStep& operator=(CerealDocumentUpgradeStep const&);
    CerealDocumentUpgradeStep(CerealDocumentUpgradeStep const&);
#endif // @header-generator platform
    CerealDocumentUpgradeStep();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CerealDocumentUpgradeStep();
#else // @header-generator platform
    virtual ~CerealDocumentUpgradeStep() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CerealDocumentUpgradeStep(::CerealDocumentUpgradeStep const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI bool apply(
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentVersion
#endif // @header-generator platform
    ) const;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
