#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

namespace mce {

class GlobalConstantBufferManager : public ::mce::Singleton<mce::GlobalConstantBufferManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::ConstantBufferContainer>> mConstantBufferContainers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GlobalConstantBufferManager();

    MCNAPI ::mce::ConstantBufferContainer& findConstantBufferContainer(std::string const&);

    MCNAPI void setDirty();

    MCNAPI ~GlobalConstantBufferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
