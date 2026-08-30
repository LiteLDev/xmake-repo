#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/AtomicEntityAnimStateComponent.h"
#include "mc/AtomicEntityAnimationContextComponent.h"
#include "mc/AtomicEntityMolangVariablesComponent.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/entity/components/atomic_entity/AtomicEntityComponent.h"
#include "mc/entity/components/atomic_entity/AtomicEntityInitDataComponent.h"
#include "mc/entity/components/atomic_entity/AtomicEntityNeedsInitializationComponent.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct TickingSystemWithInfo;
// clang-format on

class AtomicEntityInitializationSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                             Filter<AtomicEntityComponent>,
                                             Read<AtomicEntityInitDataComponent>,
                                             Write<>,
                                             AddRemove<
                                                 AtomicEntityNeedsInitializationComponent,
                                                 AtomicEntityAnimStateComponent,
                                                 AtomicEntityMolangVariablesComponent,
                                                 AtomicEntityAnimationContextComponent>,
                                             GlobalRead<>,
                                             GlobalWrite<>,
                                             EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityInitializationSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AtomicEntityInitializationSystem();

    virtual void tick(::StrictExecutionContext<Filter<AtomicEntityComponent>, Read<AtomicEntityInitDataComponent>, Write<>, AddRemove<AtomicEntityNeedsInitializationComponent, AtomicEntityAnimStateComponent, AtomicEntityMolangVariablesComponent, AtomicEntityAnimationContextComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo
    createSystem(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            Filter<AtomicEntityComponent>,
            Read<AtomicEntityInitDataComponent>,
            Write<>,
            AddRemove<
                AtomicEntityNeedsInitializationComponent,
                AtomicEntityAnimStateComponent,
                AtomicEntityMolangVariablesComponent,
                AtomicEntityAnimationContextComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
