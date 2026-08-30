#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#include "mc/world/attribute/AttributeBuffType.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Amplifier;
// clang-format on

class TemporalAttributeBuff : public ::AttributeBuff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 4, int>              mLifeTimer;
    ::ll::TypedStorage<4, 4, float>            mBaseAmount;
    ::ll::TypedStorage<1, 1, bool>             mIsSerializable;
    // NOLINTEND

public:
    // prevent constructor by default
    TemporalAttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TemporalAttributeBuff();

    virtual bool isInstantaneous() const;

    virtual bool isSerializable() const;

    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);

    virtual bool shouldBuff() const;

    virtual bool isComplete() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getBaseAmount() const;
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

    MCNAPI void $setDurationAmplifier(std::shared_ptr<Amplifier>);

    MCNAPI bool $shouldBuff() const;

    MCNAPI bool $isComplete() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
