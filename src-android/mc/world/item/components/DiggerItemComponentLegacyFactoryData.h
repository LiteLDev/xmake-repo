#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#include "mc/world/item/components/DiggerBlockTypeInfo.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DiggerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mUseEfficiency;
    ::ll::TypedStorage<8, 24, std::vector<DiggerBlockTypeInfo>>         mDestroySpeeds;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger> mOnDigDefault;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiggerItemComponentLegacyFactoryData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiggerItemComponentLegacyFactoryData(::DiggerItemComponentLegacyFactoryData const&);

    MCNAPI ::DiggerItemComponentLegacyFactoryData& operator=(::DiggerItemComponentLegacyFactoryData&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DiggerItemComponentLegacyFactoryData const&);
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
