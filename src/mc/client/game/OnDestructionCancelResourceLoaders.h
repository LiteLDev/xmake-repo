#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class ISkinRepository;
class IWorldTemplateManager;
class ResourceLoadManager;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class OnDestructionCancelResourceLoaders {
public:
    // OnDestructionCancelResourceLoaders inner types declare
    // clang-format off
    struct Loaders;
    // clang-format on

    // OnDestructionCancelResourceLoaders inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Loaders {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ResourceLoadManager*>      mResourceLoadManager;
        ::ll::TypedStorage<8, 8, ::ISkinRepository*>          mSkinRepository;
        ::ll::TypedStorage<8, 8, ::IWorldTemplateManager*>    mWorldTemplateManager;
        ::ll::TypedStorage<8, 8, ::IAdvancedGraphicsOptions*> mRayTracingOptions;
        // NOLINTEND
    };

    using LoaderFactory = ::brstd::move_only_function<OnDestructionCancelResourceLoaders::Loaders()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    OnDestructionCancelResourceLoaders();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OnDestructionCancelResourceLoaders(
        ::brstd::move_only_function<OnDestructionCancelResourceLoaders::Loaders()>
    );

    MCNAPI ~OnDestructionCancelResourceLoaders();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::brstd::move_only_function<OnDestructionCancelResourceLoaders::Loaders()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Loaders {};
#endif // @header-generator platform
};
