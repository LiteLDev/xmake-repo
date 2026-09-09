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
    ::ll::UntypedStorage<8, 16> info;
    ::ll::UntypedStorage<8, 48> blockComplexAliasCallback;
    ::ll::UntypedStorage<8, 80> itemComplexAliasCallback;
    ::ll::UntypedStorage<8, 48> registerAlteredStatesCallback;
    ::ll::UntypedStorage<8, 32> baseGameVersion;
    ::ll::UntypedStorage<8, 32> blockJsonFormatVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    Instance& operator=(Instance const&);
    Instance(Instance const&);
    Instance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Instance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace FlatteningUtils
