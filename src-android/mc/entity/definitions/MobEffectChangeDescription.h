#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/AttributeDescription.h"
#include "mc/world/effect/MobEffectInstance.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct MobEffectChangeDescription : public ::AttributeDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MobEffectInstance>> mAddEffects;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mRemoveEffects;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const;

    virtual ~MobEffectChangeDescription();

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
