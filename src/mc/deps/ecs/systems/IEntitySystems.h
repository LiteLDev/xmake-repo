#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class ITickingSystem;
struct EntitySystemTickingMode;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SystemCategory;
#endif // @header-generator platform
struct SystemInfo;
// clang-format on

class IEntitySystems {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IEntitySystems();
#else // @header-generator platform
    virtual ~IEntitySystems() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode) = 0;
#else // @header-generator platform
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const = 0;
#else // @header-generator platform
    virtual bool _hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tickMovementCatchup(::EntityRegistry&) = 0;
#else // @header-generator platform
    virtual void tickMovementCatchup(::EntityRegistry& registry) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void tickMovementCorrectionReplay(::EntityRegistry& registry) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
