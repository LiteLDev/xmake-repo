#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/systems/ComponentInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/systems/Dependencies.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
struct ComponentInfo;
#endif // @header-generator platform
// clang-format on

struct SystemInfo {
public:
    // SystemInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using GenerateComponentInfoVectorFunction = std::vector<ComponentInfo> (*)();
#else // @header-generator platform
    using GenerateComponentInfoVectorFunction = ::std::vector<::ComponentInfo> (*)();
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                     mName;
    ::ll::TypedStorage<1, 1, uchar>                            mDisplayCategoryIndex;
    ::ll::TypedStorage<8, 152, ::Dependencies>                 mDependencies;
    ::ll::TypedStorage<8, 8, std::vector<ComponentInfo> (*)()> mGenerateDetailedInfo;
#else // @header-generator platform
    ::std::string                                                  mName;
    uchar                                                          mDisplayCategoryIndex;
    ::Dependencies                                                 mDependencies;
    ::ll::TypedStorage<8, 8, ::std::vector<::ComponentInfo> (*)()> mGenerateDetailedInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
    SystemInfo(SystemInfo const&);
#else // @header-generator platform
    SystemInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SystemInfo();
#else // @header-generator platform
    MCAPI SystemInfo(::SystemInfo const&);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SystemInfo const&);
#endif // @header-generator platform
    // NOLINTEND
};
