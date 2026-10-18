#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mAmount;
    ::ll::TypedStorage<4, 4, ::AttributeBuffType>                     mType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
    ::ll::TypedStorage<4, 28, ::std::optional<::HurtEffectsSettings>> mHurtEffectsSettings;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>         mValueAmplifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>         mDurationAmplifier;
    ::ll::TypedStorage<4, 4, float>                                   mScale;
    ::ll::TypedStorage<4, 4, int>                                     mAmplification;
    ::ll::TypedStorage<8, 8, uint64>                                  mId;
    ::ll::TypedStorage<4, 4, int>                                     mOperand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AttributeBuff(AttributeBuff const&);
#endif // @header-generator platform
    AttributeBuff();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AttributeBuff();
#else // @header-generator platform
    virtual ~AttributeBuff() = default;
#endif // @header-generator platform

    virtual bool isInstantaneous() const = 0;

    virtual bool isSerializable() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDurationAmplifier(std::shared_ptr<Amplifier>);
#else // @header-generator platform
    virtual void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AttributeBuff(float, int, ::AttributeBuffType);
#else // @header-generator platform
    MCAPI AttributeBuff(float amount, int operand, ::AttributeBuffType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AttributeBuff(
        float,
        int,
        ::ActorDamageSource const&,
        ::AttributeBuffType,
        std::optional<HurtEffectsSettings> const&
#else // @header-generator platform
    MCAPI AttributeBuff(
        float                                         amount,
        int                                           operand,
        ::ActorDamageSource const&                    source,
        ::AttributeBuffType                           type,
        ::std::optional<::HurtEffectsSettings> const& hurtEffectsSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getAmount() const;
#else // @header-generator platform
    MCAPI ::AttributeBuff& operator=(::AttributeBuff const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getId() const;

    MCNAPI int getOperand() const;

    MCNAPI ::AttributeBuffType getType() const;

    MCNAPI ::AttributeBuff& operator=(::AttributeBuff const&);

    MCNAPI void setAmplificationAmount(int, float);

    MCNAPI void setId(ulong);

    MCNAPI void setOperand(int);

    MCNAPI void setSource(::Actor*);

    MCNAPI void setValueAmplifier(std::shared_ptr<Amplifier>);
#else // @header-generator platform
    MCAPI void setSource(::Actor* source);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(float, int, ::AttributeBuffType);
#else // @header-generator platform
    MCAPI void* $ctor(float amount, int operand, ::AttributeBuffType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(float, int, ::ActorDamageSource const&, ::AttributeBuffType, std::optional<HurtEffectsSettings> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        float                                         amount,
        int                                           operand,
        ::ActorDamageSource const&                    source,
        ::AttributeBuffType                           type,
        ::std::optional<::HurtEffectsSettings> const& hurtEffectsSettings
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDurationAmplifier(std::shared_ptr<Amplifier>);
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
