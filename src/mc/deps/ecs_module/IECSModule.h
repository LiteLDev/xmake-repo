#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityRegistry;
class IEntitySystems;
namespace ECSModule { struct ModuleInitArgs; }
// clang-format on

#endif // @header-generator platform
namespace ECSModule {

#if defined(LL_PLAT_A) // @header-generator platform
class IECSModule {};
#else // @header-generator platform
class IECSModule {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IECSModule() = default;

    virtual void initRegistry(::EntityRegistry& registry) = 0;

    virtual void registerSystems(::IEntitySystems& systems, ::ECSModule::ModuleInitArgs const& args) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ECSModule
