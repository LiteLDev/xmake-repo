#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/HurtEffectsSettings.h"
#include "mc/world/attribute/AttributeBuffType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Amplifier;
// clang-format on

class AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                               mAmount;
    ::ll::TypedStorage<4, 4, ::AttributeBuffType>                 mType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    ::ll::TypedStorage<4, 28, std::optional<HurtEffectsSettings>> mHurtEffectsSettings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Amplifier>>         mValueAmplifier;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Amplifier>>         mDurationAmplifier;
    ::ll::TypedStorage<4, 4, float>                               mScale;
    ::ll::TypedStorage<4, 4, int>                                 mAmplification;
    ::ll::TypedStorage<8, 8, ulong>                               mId;
    ::ll::TypedStorage<4, 4, int>                                 mOperand;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeBuff();

    virtual bool isInstantaneous() const = 0;

    virtual bool isSerializable() const = 0;

    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeBuff(float, int, ::AttributeBuffType);

    MCNAPI AttributeBuff(
        float,
        int,
        ::ActorDamageSource const&,
        ::AttributeBuffType,
        std::optional<HurtEffectsSettings> const&
    );

    MCNAPI float getAmount() const;

    MCNAPI ulong getId() const;

    MCNAPI int getOperand() const;

    MCNAPI ::AttributeBuffType getType() const;

    MCNAPI ::AttributeBuff& operator=(::AttributeBuff const&);

    MCNAPI void setAmplificationAmount(int, float);

    MCNAPI void setId(ulong);

    MCNAPI void setOperand(int);

    MCNAPI void setSource(::Actor*);

    MCNAPI void setValueAmplifier(std::shared_ptr<Amplifier>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, int, ::AttributeBuffType);

    MCNAPI void*
    $ctor(float, int, ::ActorDamageSource const&, ::AttributeBuffType, std::optional<HurtEffectsSettings> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setDurationAmplifier(std::shared_ptr<Amplifier>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
