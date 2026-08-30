#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ITickingSystem;
struct EntitySystemTickingMode;
struct SystemInfo;
// clang-format on

class IEntitySystems {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IEntitySystems();

    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode) = 0;

    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const = 0;

    virtual void tickMovementCatchup(::EntityRegistry&) = 0;

    virtual void tickMovementCorrectionReplay(::EntityRegistry&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IEntitySystems& operator=(::IEntitySystems const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
