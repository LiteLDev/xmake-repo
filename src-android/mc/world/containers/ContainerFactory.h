#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ContainerManagerModel;
class ContainerModel;
class IContainerManager;
class Player;
struct FullContainerName;
// clang-format on

class ContainerFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::weak_ptr<IContainerManager> _getPlayerContainerManager(::Player&);

    MCNAPI static void _setPlayerContainerManagerModel(::Player&, std::shared_ptr<ContainerManagerModel>);

    MCNAPI static std::shared_ptr<ContainerController> createController(std::shared_ptr<ContainerModel>);

    MCNAPI static ::FullContainerName getContainerEnumName(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FullContainerName const& INVALID_FULL_CONTAINER_ENUM_NAME();
    // NOLINTEND
};
