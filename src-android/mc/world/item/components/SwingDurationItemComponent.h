#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct SwingDurationItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SwingDurationItemComponent : public ::NetworkedItemComponent<SwingDurationItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValueInSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    SwingDurationItemComponent& operator=(SwingDurationItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwingDurationItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SwingDurationItemComponent(::SharedTypes::v1_21_90::SwingDurationItemComponent);

    MCNAPI uint getValueInTicks() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::SwingDurationItemComponent);
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
