#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
#if defined(LL_PLAT_A) // @header-generator platform
struct Paddle;
#else // @header-generator platform
#endif // @header-generator platform
struct VariantParameterList;
// clang-format on

class Boat : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBubbleMultiplier;
    ::ll::TypedStorage<4, 4, float> mBubbleAngle;
    ::ll::TypedStorage<4, 4, float> mBubbleAngleOld;
    // NOLINTEND

public:
    // prevent constructor by default
    Boat();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Boat();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual void destroy(::Actor* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void normalTick();
#else // @header-generator platform
    virtual void normalTick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getControllingPlayer() const;
#else // @header-generator platform
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAddPassenger(::Actor&) const;
#else // @header-generator platform
    virtual float getPassengerYRotation(::Actor const& passenger) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getPassengerYRotation(::Actor const&) const;
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void destroy(::Actor*);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Boat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Boat(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getBubbleAngle(float const) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getExitText(bool isPocket) const;

    MCAPI float getRowingTime(::SharedTypes::Side side, float alpha) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getExitText(bool) const;

    MCNAPI float getRowingTime(::SharedTypes::Side, float) const;

    MCNAPI uchar getWoodID() const;

    MCNAPI void postNormalTick();
#else // @header-generator platform
    MCAPI uchar getWoodID() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $normalTick();
#else // @header-generator platform
    MCAPI void $destroy(::Actor* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;
#else // @header-generator platform
    MCAPI void $normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getControllingPlayer() const;
#else // @header-generator platform
    MCAPI bool $canAddPassenger(::Actor& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canAddPassenger(::Actor&) const;
#else // @header-generator platform
    MCAPI ::ActorUniqueID $getControllingPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getPassengerYRotation(::Actor const&) const;
#else // @header-generator platform
    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::Actor*);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
