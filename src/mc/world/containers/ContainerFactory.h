#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerManagerModel;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerModel;
#if defined(LL_PLAT_A) // @header-generator platform
class IContainerManager;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
struct FullContainerName;
// clang-format on

class ContainerFactory {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::weak_ptr<IContainerManager> _getPlayerContainerManager(::Player&);

    MCNAPI static void _setPlayerContainerManagerModel(::Player&, std::shared_ptr<ContainerManagerModel>);

    MCNAPI static std::shared_ptr<ContainerController> createController(std::shared_ptr<ContainerModel>);

    MCNAPI static ::FullContainerName getContainerEnumName(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::shared_ptr<::ContainerController>
    createController(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI static ::FullContainerName getContainerEnumName(::std::string const& collectionName);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::FullContainerName const& INVALID_FULL_CONTAINER_ENUM_NAME();
#else // @header-generator platform
    MCAPI static ::FullContainerName const& INVALID_FULL_CONTAINER_ENUM_NAME();
#endif // @header-generator platform
    // NOLINTEND
};
