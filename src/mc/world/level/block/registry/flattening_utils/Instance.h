#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/item/registry/ItemRegistryComplexAlias.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct LegacyBlockInfo; }
// clang-format on

namespace FlatteningUtils {

struct Instance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> info;
    ::ll::UntypedStorage<8, 48> blockComplexAliasCallback;
    ::ll::UntypedStorage<8, 80> itemComplexAliasCallback;
    ::ll::UntypedStorage<8, 48> registerAlteredStatesCallback;
    ::ll::UntypedStorage<8, 32> baseGameVersion;
    ::ll::UntypedStorage<8, 32> blockJsonFormatVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::FlatteningUtils::LegacyBlockInfo const&> info;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const*(int)>>     blockComplexAliasCallback;
    ::ll::TypedStorage<8, 96, ::ItemRegistryComplexAlias>               itemComplexAliasCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                  registerAlteredStatesCallback;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                        baseGameVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                             blockJsonFormatVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Instance& operator=(Instance const&);
    Instance(Instance const&);
    Instance();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Instance();
#else // @header-generator platform
    MCAPI ~Instance();
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

} // namespace FlatteningUtils
