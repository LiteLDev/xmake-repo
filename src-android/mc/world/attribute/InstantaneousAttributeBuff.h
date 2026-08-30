#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
struct HurtEffectsSettings;
// clang-format on

class InstantaneousAttributeBuff : public ::AttributeBuff {
public:
    // prevent constructor by default
    InstantaneousAttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InstantaneousAttributeBuff();

    virtual bool isInstantaneous() const;

    virtual bool isSerializable() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InstantaneousAttributeBuff(float, ::ActorDamageSource const&, std::optional<HurtEffectsSettings> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, ::ActorDamageSource const&, std::optional<HurtEffectsSettings> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInstantaneous() const;

    MCNAPI bool $isSerializable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
