#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class RemoteStorageProvider {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void mapContainerToRoot(std::string const&, std::string const&);

    MCNAPI void removeMapping(std::string const&);
    // NOLINTEND
};

} // namespace Core
