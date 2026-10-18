#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeBuff.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeBuffType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TemporalAttributeBuff();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TemporalAttributeBuff();

    virtual bool isInstantaneous() const;

    virtual bool isSerializable() const;

    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
#else // @header-generator platform
    virtual ~TemporalAttributeBuff() /*override*/;
#endif // @header-generator platform

    virtual bool shouldBuff() const;

    virtual bool isComplete() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getBaseAmount() const;
#else // @header-generator platform
    virtual bool isInstantaneous() const /*override*/;

    virtual bool isSerializable() const /*override*/;

    virtual void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInstantaneous() const;
#else // @header-generator platform
    MCAPI bool $shouldBuff() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSerializable() const;
#else // @header-generator platform
    MCAPI bool $isComplete() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDurationAmplifier(std::shared_ptr<Amplifier>);
#else // @header-generator platform
    MCFOLD bool $isInstantaneous() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldBuff() const;
#else // @header-generator platform
    MCAPI bool $isSerializable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isComplete() const;
#else // @header-generator platform
    MCAPI void $setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
