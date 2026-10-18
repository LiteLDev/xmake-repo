#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IMinecraftEventing;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class IECSModulesCollection {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IECSModulesCollection() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::WeakRef<EntityRegistry>, ::VanillaSystemsRegistration::RegistrationOptions&, ::Bedrock::NonOwnerPointer<IMinecraftEventing>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void init(
        ::WeakRef<::EntityRegistry>                        registry,
        ::VanillaSystemsRegistration::RegistrationOptions& options,
        ::Bedrock::NonOwnerPointer<::IMinecraftEventing>   eventing
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
