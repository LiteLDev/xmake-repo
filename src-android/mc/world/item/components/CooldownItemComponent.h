#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace SharedTypes::v1_20_50 { struct CooldownItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CooldownItemComponent : public ::NetworkedItemComponent<CooldownItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mDuration;
    ::ll::TypedStorage<1, 1, ::SharedTypes::ItemCooldownType> mType;
    ::ll::TypedStorage<8, 40, ::HashedString>                 mCategory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CooldownItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::HashedString const& getCategory() const;

    MCNAPI float getDurationInSeconds() const;

    MCNAPI int getDurationInTicks() const;

    MCNAPI ::SharedTypes::ItemCooldownType getType() const;

    MCNAPI ::CooldownItemComponent& operator=(::CooldownItemComponent const&);
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
