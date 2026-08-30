#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IClientInstance;
// clang-format on

class ClientScriptPrimitiveShapesSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientScriptPrimitiveShapesSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptPrimitiveShapesSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientScriptPrimitiveShapesSystem(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
