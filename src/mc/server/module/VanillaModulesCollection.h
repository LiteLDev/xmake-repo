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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ECSModule { class IECSModule; }
namespace VanillaSystems { class IActorAdapter; }
namespace VanillaSystems { class IBlockSourceFactoryAdapter; }
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
#else // @header-generator platform
#endif // @header-generator platform
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaModulesCollection : public ::IECSModulesCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IActorAdapter>>              mActorAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IBlockSourceFactoryAdapter>> mBlockSourceFactoryAdapter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VanillaSystems::IVanillaSystemsEventingAdapter>> mEventingAdapter;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ECSModule::IECSModule>>>            mModules;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk6b23ff;
    ::ll::UntypedStorage<8, 8>  mUnk2a9c01;
    ::ll::UntypedStorage<8, 8>  mUnk7008f3;
    ::ll::UntypedStorage<8, 24> mUnk7202ee;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VanillaModulesCollection& operator=(VanillaModulesCollection const&);
    VanillaModulesCollection(VanillaModulesCollection const&);
    VanillaModulesCollection();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~VanillaModulesCollection();

    virtual void init(::WeakRef<EntityRegistry>, ::VanillaSystemsRegistration::RegistrationOptions&, ::Bedrock::NonOwnerPointer<IMinecraftEventing>);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(
#if defined(LL_PLAT_A) // @header-generator platform
        ::WeakRef<EntityRegistry>,
        ::VanillaSystemsRegistration::RegistrationOptions&,
        ::Bedrock::NonOwnerPointer<IMinecraftEventing>
#else // @header-generator platform
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
