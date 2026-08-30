#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/deps/script_core/binding_type/scripting/TypeMapData.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
// clang-format on

namespace Scripting {

class TypeMapBuilder : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>        keyConstantName;
    ::ll::TypedStorage<8, 16, ::entt::meta_type const>  baseClassType;
    ::ll::TypedStorage<8, 72, ::Scripting::TypeMapData> mCurrentTypeMap;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TypeMapBuilder(std::string const&, std::string const&, ::entt::meta_type);

    MCNAPI void mapping(
        std::string const&,
        std::string const&,
        std::vector<Scripting::Release> const&,
        std::vector<Scripting::Release> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, ::entt::meta_type);
    // NOLINTEND
};

} // namespace Scripting
