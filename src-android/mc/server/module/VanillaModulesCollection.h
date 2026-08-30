#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/server/module/IECSModulesCollection.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace ECSModule { class IECSModule; }
namespace VanillaSystems { class IActorAdapter; }
namespace VanillaSystems { class IBlockSourceFactoryAdapter; }
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaModulesCollection : public ::IECSModulesCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IActorAdapter>>              mActorAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IBlockSourceFactoryAdapter>> mBlockSourceFactoryAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IVanillaSystemsEventingAdapter>> mEventingAdapter;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ECSModule::IECSModule>>>            mModules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaModulesCollection();

    virtual void init(::WeakRef<EntityRegistry>, ::VanillaSystemsRegistration::RegistrationOptions&, ::Bedrock::NonOwnerPointer<IMinecraftEventing>);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(
        ::WeakRef<EntityRegistry>,
        ::VanillaSystemsRegistration::RegistrationOptions&,
        ::Bedrock::NonOwnerPointer<IMinecraftEventing>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
