#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/world/actor/AttributeDescription.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct AttackDescription : public ::AttributeDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::FloatRange>     mDamage;
    ::ll::TypedStorage<8, 24, std::string>     mEffectName;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mEffectDuration;
    ::ll::TypedStorage<4, 4, int>              mEffectAmplifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const;

    virtual ~AttackDescription();

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
