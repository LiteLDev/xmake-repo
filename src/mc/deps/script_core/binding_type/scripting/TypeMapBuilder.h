#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TypeMapData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
// clang-format on

namespace Scripting {

class TypeMapBuilder : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>        keyConstantName;
    ::ll::TypedStorage<8, 16, ::entt::meta_type const>  baseClassType;
    ::ll::TypedStorage<8, 72, ::Scripting::TypeMapData> mCurrentTypeMap;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd6418c;
    ::ll::UntypedStorage<8, 16> mUnk411221;
    ::ll::UntypedStorage<8, 80> mUnkfd221a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TypeMapBuilder& operator=(TypeMapBuilder const&);
    TypeMapBuilder(TypeMapBuilder const&);
#endif // @header-generator platform
    TypeMapBuilder();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TypeMapBuilder(std::string const&, std::string const&, ::entt::meta_type);
#else // @header-generator platform
    MCNAPI TypeMapBuilder(
        ::std::string const& typeMapName_,
        ::std::string const& keyConstantName_,
        ::entt::meta_type    baseClassType_
    );
#endif // @header-generator platform

    MCNAPI void mapping(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        std::string const&,
        std::vector<Scripting::Release> const&,
        std::vector<Scripting::Release> const&
#else // @header-generator platform
        ::std::string const&                       keyName,
        ::std::string const&                       className,
        ::std::vector<::Scripting::Release> const& classReleases,
        ::std::vector<::Scripting::Release> const& keyReleases
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, ::entt::meta_type);
#else // @header-generator platform
    MCNAPI void*
    $ctor(::std::string const& typeMapName_, ::std::string const& keyConstantName_, ::entt::meta_type baseClassType_);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
