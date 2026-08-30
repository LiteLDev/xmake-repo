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
struct Paddle;
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
    virtual ~Boat();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void normalTick();

    virtual std::string getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    virtual float getShadowRadius() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual bool canAddPassenger(::Actor&) const;

    virtual float getPassengerYRotation(::Actor const&) const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void destroy(::Actor*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Boat(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI float getBubbleAngle(float const) const;

    MCNAPI std::string getExitText(bool) const;

    MCNAPI float getRowingTime(::SharedTypes::Side, float) const;

    MCNAPI uchar getWoodID() const;

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI void $normalTick();

    MCNAPI std::string $getExitTip(std::string const&, ::InputMode, ::NewInteractionModel) const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI bool $canAddPassenger(::Actor&) const;

    MCNAPI float $getPassengerYRotation(::Actor const&) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $destroy(::Actor*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
