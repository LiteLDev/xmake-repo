#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/WorldConstants.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/WorldConstants.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ThreadedWorldConstants : public ::mce::WorldConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 112> mWorldConstantsContainer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThreadedWorldConstants();

    virtual void init();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ThreadedWorldConstants : public ::mce::WorldConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::mce::ConstantBufferContainer> mWorldConstantsContainer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ThreadedWorldConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
