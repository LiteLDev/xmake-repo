#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ScriptModuleServerGraphics {

struct BiomeKey {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel const*>        level;
    ::ll::TypedStorage<8, 24, std::string>                biomeId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> playerId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkfe2e6d;
    ::ll::UntypedStorage<8, 32> mUnkbf7ae3;
    ::ll::UntypedStorage<8, 40> mUnk190534;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeKey& operator=(BiomeKey const&);
    BiomeKey(BiomeKey const&);
    BiomeKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
