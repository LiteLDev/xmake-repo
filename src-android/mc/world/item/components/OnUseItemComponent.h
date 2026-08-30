#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnUseItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnUse;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnUseItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
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
