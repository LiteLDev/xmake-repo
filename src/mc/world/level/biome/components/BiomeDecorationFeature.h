#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/ScatterParams.h"

// auto generated forward declare list
// clang-format off
class IFeature;
// clang-format on

struct BiomeDecorationFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 216, ::ScatterParams> mScatter;
    ::ll::UntypedStorage<1, 24>                 mFeature;
    ::ll::TypedStorage<8, 40, ::HashedString>   mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>      mPass;
    ::ll::TypedStorage<1, 1, bool>              mCanUseInternalFeature;
#else // @header-generator platform
    ::ll::TypedStorage<8, 216, ::ScatterParams>      mScatter;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeature;
    ::ll::TypedStorage<8, 48, ::HashedString>        mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>         mPass;
    ::ll::TypedStorage<1, 1, bool>                   mCanUseInternalFeature;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BiomeDecorationFeature();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BiomeDecorationFeature();
#else // @header-generator platform
    MCAPI BiomeDecorationFeature(::BiomeDecorationFeature const&);

    MCAPI ~BiomeDecorationFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeDecorationFeature const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
