#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockSpecifier {
public:
    // BlockSpecifier inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StateMap = std::unordered_map<std::string, std::variant<int, bool, std::string>>;
#else // @header-generator platform
    using StateMap = ::std::unordered_map<::std::string, ::std::variant<int, bool, ::std::string>>;

    using StateMapValue = ::std::variant<int, bool, ::std::string>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                                      mBlockName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::variant<int, bool, std::string>>> mStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>>                                                   mBlockName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::variant<int, bool, ::std::string>>> mStates;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockSpecifier();

    MCNAPI ~BlockSpecifier();
#else // @header-generator platform
    MCAPI ~BlockSpecifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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

} // namespace SharedTypes::v1_20_60
