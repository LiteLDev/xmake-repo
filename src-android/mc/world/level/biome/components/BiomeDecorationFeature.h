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
    ::ll::TypedStorage<8, 216, ::ScatterParams> mScatter;
    ::ll::UntypedStorage<1, 24>                 mFeature;
    ::ll::TypedStorage<8, 40, ::HashedString>   mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>      mPass;
    ::ll::TypedStorage<1, 1, bool>              mCanUseInternalFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDecorationFeature& operator=(BiomeDecorationFeature const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeDecorationFeature();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
