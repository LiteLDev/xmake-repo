#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#include "mc/world/item/components/DiggerBlockTypeInfo.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/AllExperiments.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
struct DiggerBlockTypeInfo;
#endif // @header-generator platform
// clang-format on

struct DiggerItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mUseEfficiency;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerBlockTypeInfo>>     mDestroySpeeds;
    ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> mOnDigDefault;
#endif // @header-generator platform
    // NOLINTEND
};
