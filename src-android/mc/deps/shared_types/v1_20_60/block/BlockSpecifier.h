#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockSpecifier {
public:
    // BlockSpecifier inner types define
    using StateMap = std::unordered_map<std::string, std::variant<int, bool, std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                      mBlockName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::variant<int, bool, std::string>>> mStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockSpecifier();

    MCNAPI ~BlockSpecifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
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

} // namespace SharedTypes::v1_20_60
