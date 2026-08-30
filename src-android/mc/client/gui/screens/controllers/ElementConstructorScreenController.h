#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class ElementConstructorContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class ElementConstructorScreenController : public ::ContainerScreenController {
public:
    // ElementConstructorScreenController inner types define
    enum class ParticleType : uchar {
        Proton   = 0,
        Electron = 1,
        Neutron  = 2,
        Count    = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ElementConstructorContainerManagerController>> mManagerController;
    ::ll::TypedStorage<4, 12, int[3]>                                                        mParticleCounts;
    ::ll::TypedStorage<1, 1, bool>                                                           mInitModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ElementConstructorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ElementConstructorScreenController();

    virtual bool _isStillValid() const;

    virtual std::string _getButtonADescription();

    virtual std::string _getButtonXDescription();

    virtual void _registerCoalesceOrder();

    virtual void _registerAutoPlaceOrder();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ElementConstructorScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        ::Player&,
        ::BlockPos const&,
        ::ActorUniqueID const
    );

    MCNAPI void _registerParticleBindings(::ElementConstructorScreenController::ParticleType, std::string const&);

    MCNAPI void _registerParticleEventHandlers(::ElementConstructorScreenController::ParticleType, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>, ::Player&, ::BlockPos const&, ::ActorUniqueID const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isStillValid() const;

    MCNAPI std::string $_getButtonADescription();

    MCNAPI std::string $_getButtonXDescription();

    MCNAPI void $_registerCoalesceOrder();

    MCNAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
