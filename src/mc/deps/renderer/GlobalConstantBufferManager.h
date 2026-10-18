#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GlobalConstantBufferManager : public ::mce::Singleton<::mce::GlobalConstantBufferManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ConstantBufferContainer>> mConstantBufferContainers;
    // NOLINTEND
};
#else // @header-generator platform
class GlobalConstantBufferManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
